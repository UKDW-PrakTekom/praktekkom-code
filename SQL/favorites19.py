import sqlite3

# Open database connection
connection = sqlite3.connect("favorites.db")
cursor = connection.cursor()

# Define the values for the update
new_language_value = 'C++'
current_language_value = 'C'

# Execute the query to update rows
cursor.execute("UPDATE favorites SET language = ? WHERE language = ?;", (new_language_value, current_language_value))

# Commit the transaction
connection.commit()

# Close the connection
connection.close()
