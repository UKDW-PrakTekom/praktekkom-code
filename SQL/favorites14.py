import sqlite3

# Open database connection
connection = sqlite3.connect("favorites.db")
cursor = connection.cursor()

# Define the language you want to count
target_language = 'C'

# Execute the query to get the count of rows where language is 'C'
cursor.execute("SELECT COUNT(*) FROM favorites WHERE language = ?;", (target_language,))

# Fetch the result
count = cursor.fetchone()[0]

# Print the count
print(count)

# Close the connection
connection.close()
