# Searches database popularity of a problem
import sqlite3

# Open database connection
connection = sqlite3.connect("favorites.db")
cursor = connection.cursor()

# Prompt user for favorite
favorite = input("Favorite: ")

# Search for title
cursor.execute("SELECT COUNT(*) FROM favorites WHERE problem LIKE ?", ("%" + favorite + "%",))

# Fetch the result
row = cursor.fetchone()

# Print popularity
print(row[0])

# Close the connection
connection.close()
