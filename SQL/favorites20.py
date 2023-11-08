import sqlite3

# Open database connection
connection = sqlite3.connect("favorites.db")
cursor = connection.cursor()

# Define the value for the deletion condition
target_problem = 'Tideman'

# Execute the query to delete rows
cursor.execute("DELETE FROM favorites WHERE problem = ?;", (target_problem,))

# Commit the transaction
connection.commit()

# Close the connection
connection.close()