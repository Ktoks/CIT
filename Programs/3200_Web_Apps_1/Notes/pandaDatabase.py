import sqlite3
# connecting
# open the file

def dict_factory(cursor, row):
    d = {}
    for idx, col in enumerate(cursor.description):
        d[col[0]] = row[idx]
    return d

class PandasDB:
    def __init__(self):
        print("Connecting to DB.")
        self.connection = sqlite3.connect("demo_db.db")  # returns the connection object
        self.connection.row_factory = dict_factory
        self.cursor = self.connection.cursor()

    def __del__(self):
        print("Disconnecting from DB.")
        self.connection.close()

    def getPandas(self):
        self.cursor.execute("SELECT * FROM pandas")
        return self.cursor.fetchall()

    def getPanda(self, panda_id):
        self.cursor.execute("SELECT * FROM pandas WHERE id = ?", [panda_id])
        return self.cursor.fetchone()
    
    def createPanda(self, name, age, color):
        self.cursor.execute("INSERT INTO pandas (name, age, color) VALUES (?, ?, ?)",[name, age, color])  # always a list
        self.connection.commit()  # anytime you modify your database, save

    def delete(self, panda_id):
        self.cursor.execute("DELETE FROM pandas WHERE id=?", [panda_id])
        self.connection.commit()



# db = PandasDB()
# db.createPanda("Charlie", 5, "blue")

# names = ["Bob", "Lucy", "Poe", "Charlie", "Johny-Rockets"]
# random_name = names[random.randrange(len(names))]
# colors = ["red", "white", "black", "black&white", "idk"]
# random_color = colors[random.randrange(len(colors))]
# random_age = random.randrange(2,10)

# inserting
# semi-colon is not needed in python

# selecting (reading)
