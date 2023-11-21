import sqlite3

# Open database connection
connection = sqlite3.connect("favorites.db")
cursor = connection.cursor()

# Execute the query to get the count of distinct languages
cursor.execute("SELECT COUNT(DISTINCT(language)) FROM favorites;")

# Fetch the result
count = cursor.fetchone()[0]

# Print the count of distinct languages
print(count)

# Close the connection
connection.close()
