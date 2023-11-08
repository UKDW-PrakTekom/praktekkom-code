from flask import Flask, redirect, request, url_for

app = Flask(__name__)

@app.route("/show/<number>")  
def show(number):
    return "You passed in {}".format(number)

@app.route('/success/<name>', methods=['GET'] )
def success(name):
    return 'welcome %s' % name

@app.route("/login", methods=['GET', 'POST'])  
def login():
    if request.method == "POST":   
        # do one thing
        print("")
        username = request.form['username']
        password = request.form['password']
        print("username : ", username, " password : ", password)
        return redirect(url_for('success', name = username))
    else:
        # do a different thing
        pass

if __name__ == '__main__':
    print("This is flask Program!")
    app.run()
