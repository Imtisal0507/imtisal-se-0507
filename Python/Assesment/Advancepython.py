import mysql.connector


# Database connection setup
class Database:
    def __init__(self):
        try:
            self.conn = mysql.connector.connect(
                host="localhost",
                user="root",
                password="yourpassword",
                database="banking_db"
            )
            self.cursor = self.conn.cursor()
            print("Database connected successfully.")
        except mysql.connector.Error as e:
            print(f"Error connecting to database: {e}")
            exit()

    def execute_query(self, query, params=None):
        try:
            self.cursor.execute(query, params or ())
            self.conn.commit()
        except mysql.connector.Error as e:
            print(f"Database query error: {e}")

    def fetch_all(self, query, params=None):
        self.cursor.execute(query, params or ())
        return self.cursor.fetchall()

    def fetch_one(self, query, params=None):
        self.cursor.execute(query, params or ())
        return self.cursor.fetchone()

# Common User Class
class User:
    def __init__(self, db, name, email, password):
        self.db = db
        self.name = name
        self.email = email
        self.password = password

# Banker Module
class Banker(User):
    def register(self):
        query = "INSERT INTO bankers (name, email, password) VALUES (%s, %s, %s)"
        self.db.execute_query(query, (self.name, self.email, self.password))
        print("Banker registered successfully.")
    
    def view_customers(self):
        customers = self.db.fetch_all("SELECT id, name, email FROM customers")
        for customer in customers:
            print(f"ID: {customer[0]}, Name: {customer[1]}, Email: {customer[2]}")
    
# Customer Module
class Customer(User):
    def __init__(self, db, name, email, password, balance=0):
        super().__init__(db, name, email, password)
        self.__balance = balance
    
    def register(self):
        query = "INSERT INTO customers (name, email, password, balance) VALUES (%s, %s, %s, %s)"
        self.db.execute_query(query, (self.name, self.email, self.password, self.__balance))
        print("Customer registered successfully.")
    
    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount
            query = "UPDATE customers SET balance = %s WHERE email = %s"
            self.db.execute_query(query, (self.__balance, self.email))
            print(f"Successfully deposited ${amount}. New balance: ${self.__balance}")
        else:
            print("Invalid deposit amount.")
    
    def withdraw(self, amount):
        if 0 < amount <= self.__balance:
            self.__balance -= amount
            query = "UPDATE customers SET balance = %s WHERE email = %s"
            self.db.execute_query(query, (self.__balance, self.email))
            print(f"Successfully withdrew ${amount}. Remaining balance: ${self.__balance}")
        else:
            print("Insufficient balance or invalid amount.")

# Main menu
def main():
    db = Database()
    while True:
        print("\nBanking System")
        print("1. Register Banker")
        print("2. Register Customer")
        print("3. View Customers")
        print("4. Exit")
        
        choice = input("Enter your choice: ")
        
        if choice == '1':
            name = input("Enter name: ")
            email = input("Enter email: ")
            password = input("Enter password: ")
            banker = Banker(db, name, email, password)
            banker.register()
        elif choice == '2':
            name = input("Enter name: ")
            email = input("Enter email: ")
            password = input("Enter password: ")
            customer = Customer(db, name, email, password)
            customer.register()
        elif choice == '3':
            banker = Banker(db, "", "", "")
            banker.view_customers()
        elif choice == '4':
            print("Exiting system...")
            break
        else:
            print("Invalid choice! Please try again.")

if __name__ == "__main__":
    main()
