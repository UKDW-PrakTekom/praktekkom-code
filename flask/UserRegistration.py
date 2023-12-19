from flask import Flask, redirect, request, url_for
import sqlite3

app = Flask(__name__)

@app.route('/success/<name>', methods=['GET'] )
def success(name):
    return 'Registration %s success' % name

@app.route('/loginsuccess/<name>', methods=['GET'] )
def loginsuccess(name):
    return 'Welcome back %s! ' % name

@app.route('/loginfailed', methods=['GET'] )
def loginfailed():
    return 'Login Failed! Please check your username & password!'

@app.route("/registeruser", methods=['POST'])  
def registeruser():
    if request.method == "POST":   
        realname = request.form['realname']
        pob = request.form['pob']        
        username = request.form['username']
        password = request.form['password']
        saveUserToDB(realname, pob, username, password)        
        return redirect(url_for('success', name = username))

@app.route("/login", methods=['POST'])  
def login():
    # do one thing
    print("")
    username = request.form['username']
    password = request.form['password']
    count = userLogin(username, password)

    if count is None:
        return redirect(url_for('loginfailed'))
    return redirect(url_for('loginsuccess', name = username))

def saveUserToDB(realname, pob, username, password):
    # Open database connection
    connection = sqlite3.connect("user.db")
    cursor = connection.cursor()
    # Execute the query to get language and count information
    cursor.execute("INSERT INTO user (realname, pob, username, password) VALUES (?, ?, ?, ?);", 
                   (realname, pob, username, password))
    connection.commit()
    # Close the connection
    connection.close()

def userLogin(username, password):
    # Open database connection
    connection = sqlite3.connect("user.db")
    cursor = connection.cursor()
    # Execute the query
    cursor.execute("SELECT username, password FROM user WHERE username = ? AND password = ?;", 
                   (username, password))    
    count = cursor.fetchone()

    print("found ",count)
    # Close the connection
    connection.close()
    return count

if __name__ == '__main__':
    app.run()
