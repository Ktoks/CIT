from http.server import BaseHTTPRequestHandler, HTTPServer
from urllib.parse import parse_qs
import json
from pandaDatabase import PandasDB
from passlib.hash import bcrypt

class MyHandler(BaseHTTPRequestHandler):
    def do_OPTIONS(self):
        self.send_response(200)
        self.send_header("Access-Control-Allow-Origin", "*")
        self.send_header("Access-Control-Allow-Headers", "Content-type")
        self.send_header("Access-Control-Allow-Methods", "GET, POST, DELETE, OPTIONS")
        self.end_headers()
        return
        # don't get rid of other access-control-allow-origins

    def do_GET(self):  # client requests a list of information
        if self.path == "/pandas":
            self.handlelist()
        elif self.path.startswith("/pandas/"):
            parts = self.path.split('/')
            panda_id = parts[2]
            self.handlePandaRetrieve(panda_id)
        else:
            self.handlenotfound()

    def handlePandaRetrieve(self, pandaID):
        db = PandasDB()
        panda = db.getPanda(pandaID)
        if panda == None:
            self.handlenotfound()
        else:
            self.send_response(200)

    def do_POST(self):  # client requests to create something
        if self.path == "/pandas":
            self.handlePandaCreate()

        else:
            self.handlenotfound()
        return

    def do_DELETE(self):
        pass

        # retrieve, put, delete, all can be a bad ID

    def handlelist(self):
        jsonstring = []
        fin = open("mydata.txt", "r")
        for f in fin:
            f = f.strip()
            jsonstring.append(f)
        self.send_response(200)
        logs = json.dumps(jsonstring)
        self.send_header("Content-type", "application/json")
        self.send_header("Access-Control-Allow-Origin", "*")  # CORS THINGY TO ALLOW SERVER TO WORK
        self.end_headers()
        # body
        db = PandasDB()
        pandas = db.getPandas()
        self.wfile.write(pandas)
        self.wfile.write(bytes(logs, "utf-8"))  # we need to send json data

    def handlenotfound(self):
        self.send_response(404)  # when page isn't found it lets the client know it's not found
        self.send_header("Content-type", "text/html")
        self.send_header("Access-Control-Allow-Origin", "*")  # CORS THINGY TO ALLOW SERVER TO WORK
        self.end_headers()
        # body
        self.wfile.write(bytes("<h1>Not Found.</h1>", "utf-8"))  # bytes converts html to bytes


    def handlePandaCreate(self):
        length = self.headers["Content-length"]  # grabs the length of the body from the header
        # read the body data from the client
        body = self.rfile.read(int(length)).decode("utf-8")  # using length, server recieves the body, reads it and decodes is from utf-8
        data = parse_qs(body)
        name = data['name'][0]
        age = data['age'][0]
        color = data['color'][0]

        db = PandasDB()
        db.createPanda(name, age, color)

        self.send_response(201)
        self.send_header("Access-Control-Allow-Origin", "*")  # CORS THINGY TO ALLOW SERVER TO WORK
        self.end_headers()

    def handlePandaDelete(self, pandaID):
        db = PandasDB()
        panda = db.getPanda(pandaID)

        if panda == None:
            self.handlenotfound()
        else:
            db.deletePanda(pandaID)
            self.send_response(200)
            self.send_header("Access-Control-Allow-Origin", "*")
            self.end_headers()



def run():
    listen = ("127.0.0.1", 8080)
    server = HTTPServer(listen, MyHandler)

    print("Listening...")
    server.serve_forever()


run()

# server is going to be sending MIME types to the client
# application/x-www-form-urlencoded is a mimetype you need to know for the exam
# firstname=DJ&lastname=Holt
# percent encoding: used to encode spaces, !@#$%%^&*()..etc there is a library for this:: %20 is the percent encoding for a space
# encodURIComponent("charlie brown & lucy")