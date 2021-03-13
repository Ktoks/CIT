from http.server import BaseHTTPRequestHandler, HTTPServer
from urllib.parse import parse_qs
import json
from authenticationDatabase import DocsDB
from passlib.hash import bcrypt
from http import cookies

class MyHandler(BaseHTTPRequestHandler):

    def load_cookie(self):
        if 'Cookie' in self.headers:
            self.cookie = cookies.SimpleCookie(self.headers['Cookie'])
        else:
            self.cookie = cookies.SimpleCookie()

    def send_cookie(self):
        for morsel in self.cookie.values():
            self.send_header('Set-Cookie', morsel.OutputString())

    def do_OPTIONS(self):
        self.send_response(200)
        self.send_header("Access-Control-Allow-Origin", "*")
        self.send_header("Access-Control-Allow-Headers", "Content-type")
        self.send_header("Access-Control-Allow-Methods", "GET, POST, PUT, DELETE, OPTIONS")
        self.end_headers()
        return

    def do_GET(self):  # client requests a list of information
        #
        if self.path == '/cookiemonster':
            print(self.headers['Cookie'])
            self.send_response(200)
            self.send_header('Set-Cookie', 'hungry=true')
            self.send_header('Set-Cookie', 'hungrylevel=999')
            self.end_headers()
            self.wfile.write(bytes('HUNGRY!', 'utf-8'))
            return
        #
        
        if self.path == "/docs":
            self.handlelist()
        elif self.path.startswith("/docs/"):
            parts = self.path.split('/')
            doc_id = parts[2]
            self.handleRetrieve(doc_id)
        else:
            self.handlenotfound()

    def do_DELETE(self):
        if self.path.startswith("/docs"):
            parts = self.path.split('/')
            doc_id = parts[2]
            self.handleDelete(doc_id)
        else:
            self.handlenotfound()

            
    def do_PUT(self):
        if self.path.startswith("/docs"):
            parts = self.path.split('/')
            doc_id = parts[2]
            self.handleUpdate(doc_id)
        else:
            self.handlenotfound()

    # notes
    # 422 status code to say unprocessible 
    # http is stateless
    # python holds the state of the browser
    # server handles cookies
    # client holds the cookies to access your web app
    # hashing a copy of the cookie allows you to authenticate it
    # the cookie connects the session with the user
    # using ids that are obscure is more secure than sequencial ids
    # we will have a database, session store, and cookies
    # cookies are transfered through the headers

    def handleRetrieve(self, docID):
        db = DocsDB()
        doc = db.getDoc(docID)
        if doc == None:
            self.handlenotfound()
        else:
            self.send_response(200)
            self.send_header("Access-Control-Allow-Origin", "*")
            self.end_headers()
            self.wfile.write(bytes(json.dumps(doc), "utf-8"))

    def do_POST(self):  # client requests to create something
        if self.path == "/docs":
            self.handleCreate()
        else:
            self.handlenotfound()

    def handlelist(self):
        self.send_response(200)
        self.send_header("Content-type", "application/json")
        self.send_header("Access-Control-Allow-Origin", "*")  # CORS THINGY TO ALLOW SERVER TO WORK
        self.end_headers()
        db = DocsDB()
        docs = db.getDocs()
        self.wfile.write(bytes(json.dumps(docs), "utf-8"))  # we need to send json data

    def handlenotfound(self):
        self.send_response(404)  # when page isn't found it lets the client know it's not found
        self.send_header("Content-type", "text/html")
        self.send_header("Access-Control-Allow-Origin", "*")  # CORS THINGY TO ALLOW SERVER TO WORK
        self.end_headers()
        self.wfile.write(bytes("<h1>Not Found.</h1>", "utf-8"))  # bytes converts html to bytes

    def handleCreate(self):
        length = self.headers["Content-length"]  # grabs the length of the body from the header
        # read the body data from the client
        body = self.rfile.read(int(length)).decode("utf-8")  # using length, server recieves the body, reads it and decodes is from utf-8
        data = parse_qs(body)
        name = data['name'][0]
        charClass = data['charClass'][0]
        role = data['role'][0]
        trials = data['trials'][0]
        comments = data['comments'][0]

        db = DocsDB()
        db.createDoc(name, charClass, role, trials, comments)

        self.send_response(201)
        self.send_header("Access-Control-Allow-Origin", "*")  # CORS THINGY TO ALLOW SERVER TO WORK
        self.end_headers()

    def handleDelete(self, docID):
        db = DocsDB()
        doc = db.getDoc(docID)

        if doc == None:
            self.handlenotfound()
        else:
            db.deleteDoc(docID)
            self.send_response(200)
            self.send_header("Access-Control-Allow-Origin", "*")
            self.end_headers()

    def handleUpdate(self, docID):
        db = DocsDB()
        doc = db.getDoc(docID)
        if doc == None:
            self.handlenotfound()
        else:
            length = self.headers["Content-length"]
            body = self.rfile.read(int(length)).decode("utf-8")
            data = parse_qs(body)
            name = data['name'][0]
            role = data['role'][0]
            charClass = data['charClass'][0]
            trials = data['trials'][0]
            comments = data['comments'][0]
            db.updateDoc(name, role, charClass, trials, comments, docID)
            self.send_response(200)
            self.send_header("Access-Control-Allow-Origin", "*")
            self.end_headers()


def run():
    listen = ("127.0.0.1", 8080)
    server = HTTPServer(listen, MyHandler)

    print("Listening...")
    server.serve_forever()


run()







