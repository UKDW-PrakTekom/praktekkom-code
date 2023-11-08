import sqlite3

# Open database connection
connection = sqlite3.connect("favorites.db")
cursor = connection.cursor()

# Define the values to be inserted
language_value = 'SQL'
problem_value = 'Fiftyville'

# Execute the query to insert a new row
cursor.execute("INSERT INTO favorites (language, problem) VALUES (?, ?);", (language_value, problem_value))

# Commit the transaction
connection.commit()

# Close the connection
connection.close()