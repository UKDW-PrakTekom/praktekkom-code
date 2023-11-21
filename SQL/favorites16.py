import sqlite3

# Open database connection
connection = sqlite3.connect("favorites.db")
cursor = connection.cursor()

# Execute the query to get language and count information
cursor.execute("SELECT language, COUNT(*) FROM favorites GROUP BY language;")

# Fetch all the results
rows = cursor.fetchall()

# Print the language and count information
for row in rows:
    language, count = row
    print(f"Language: {language}, Count: {count}")

# Close the connection
connection.close()