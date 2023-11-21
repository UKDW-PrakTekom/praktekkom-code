import sqlite3

# Open database connection
connection = sqlite3.connect("favorites.db")
cursor = connection.cursor()

# Execute the query to get distinct languages
cursor.execute("SELECT DISTINCT(language) FROM favorites;")

# Fetch all the results
rows = cursor.fetchall()

# Print the distinct languages
for row in rows:
    print(row[0])

# Close the connection
connection.close()
