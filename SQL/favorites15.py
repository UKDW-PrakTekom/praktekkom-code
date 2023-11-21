import sqlite3

# Open database connection
connection = sqlite3.connect("favorites.db")
cursor = connection.cursor()

# Define the language and problem you want to count
target_language = 'C'
target_problem = 'Mario'

# Execute the query to get the count of rows where language is 'C' and problem is 'Mario'
cursor.execute("SELECT COUNT(*) FROM favorites WHERE language = ? AND problem = ?;", (target_language, target_problem))

# Fetch the result
count = cursor.fetchone()[0]

# Print the count
print(count)

# Close the connection
connection.close()
