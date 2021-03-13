from http.server import BaseHTTPRequestHandler , HTTPServer
from urllib.parse import parse_qs

pandas = []

class MyHandler(BaseHTTPRequestHandler):

    def do_GET(self):               # client requests a list of information
        if self.path == "/mydata":
            self.send_response(201)
            self.send_header("Content-type", "text/html")
            self.end_headers()
            #body
            self.wfile.write(bytes(str(pandas), "utf-8"))# we need to send json data
        else:
            self.send_response(404)         # when page isn't found it lets the client know it's not found
            self.send_header("Content-type", "text/html")
            self.end_headers()
            # body
            self.wfile.write("<h1>Not Found.</h1>", "utf-8")

    def do_POST(self):              # client requests to create something
        if self.path == "/pandas":
            length = self.headers["Content-length"]     # grabs the length of the body from the header
            #read the body data from the client
            body = self.rfile.read(int(length)).decode("utf-8") # using length, server recieves the body, reads it and decodes is from utf-8
            print("The body: ",body)
            data = parse_qs(body)
            print("The data: ",data)
            name = data['name'][0]
            print("The name: ",name)

            pandas.append(name)
        else:
            pass

        return



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