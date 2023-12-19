from flask import Flask

app = Flask(__name__)

@app.route("/") 
def index():
    return "You are at the index page!"

@app.route("/sample")
def sample():
    return "You are on the sample page!"

@app.route("/sample2")
def sample2():
    return "You are on the sample2 page!"

@app.route("/sample3")
def sample3():
    return "You are on the sample3 page!"

@app.route("/show/<number>")  
def show(number):
    return "You passed in {}".format(number)


if __name__ == '__main__':
    print("This is flask Program!")
    app.run()
