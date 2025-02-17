# 1. Write a Python program to print “Hello, World!” on the screen. 

""" s='Hello, World!'
print(s)  # Output: Hello, World!
 """    

# 2) Write a Python program to read a string, an integer, and a float from the keyboard and display them. 
""" # Read input from the user
n1 = input("Enter a string: ")
n2 = int(input("Enter an integer: "))
n3 = float(input("Enter a float: "))

# Display the inputs
print("\nYou entered:")
print(f"String: {n1}")
print(f"Integer: {n2}")
print(f"Float: {n3}")

 """

# 3), 4) Create a File and Write a String into It
# Create a file and write a string into it
f = open(r"D:\Programing\Assignment(pyhon)\Module-15\task.txt", "w")
f.write("Hello, World!")
f.close()

# 5) Read a File and Print the Data on the Console
# Read a file and print the data on the console
f = open(r"D:\Programing\Assignment(pyhon)\Module-15\task.txt", "r")
data = f.read()
print(data)
f.close()

# 6) Check the Current Position of the File Cursor Using `tell()`
# Check the current position of the file cursor using tell()
f = open(r"D:\Programing\Assignment(pyhon)\Module-15\task.txt", "r")
f.read(5)
print(f.tell())  # Output: 5
f.close()


# 7) Write a Python program to handle exceptions in a calculator. 

""" def calculator():
    try:
        # Display operation menu
 
        print("Press 1 for Addition ")
        print("Press 2 for Subtraction")
        print("Press 3 for Multiplication")
        print("Press 4 for Division")


        # Take inputs from the user
        n1 = float(input("Enter the first number: "))
        n2 = float(input("Enter the second number: "))
        op1 = int(input("Enter your choice (1/2/3/4): "))

        # Perform the operation based on user choice
        if op1 == 1:
            print(f"The result of addition is: {n1 + n2}")
        elif op1 == 2:
            print(f"The result of subtraction is: {n1 - n2}")
        elif op1 == 3:
            print(f"The result of multiplication is: {n1 * n2}")
        elif op1 == 4:
            if n2 == 0:
                raise ZeroDivisionError
            print(f"The result of division is: {n1 / n2}")
        else:
            print("Invalid operation choice. Please select 1, 2, 3, or 4.")

    except ValueError:
        print("Invalid input. Please enter numbers only.")
    except ZeroDivisionError:
        print("Error: Division by zero is not allowed.")
    except Exception as e:
        print(f"An unexpected error occurred: {e}") """


# 8) Write a Python program to handle multiple exceptions (e.g., file not found, division by zero). 
""" try:
    # Input numbers
    n = int(input("Enter number 1 : "))
    n2 = int(input("Enter number 2 : "))
    
    # Perform division
    result = n / n2
    print("Result:", result)

except ZeroDivisionError:
    print("Cannot divide by zero.")
except ValueError:
    print("Invalid input. Please enter valid numbers.")
 """

# 9) Write a Python program to handle file exceptions and use the finally block for closing the file. 
""" try:
    # Attempt to open the file in read mode
    file = open("D:\\Programing\\Assignment(pyhon)\\Module-15\\task.txt", "r")
    print("File opened successfully.")
    print(file.read())
except FileNotFoundError:
    print("File not found. Please check the file name and path.")
except Exception as e:
    print(f"An error occurred: {e}")
finally:
    # Ensure the file is closed if it was opened
    if 'file' in locals():
        file.close()
        print("File closed.")
 """


# 10) Write a Python program to print custom exceptions. 
# Define a custom exception
""" class CustomError(Exception):
    pass

# Function to demonstrate custom exceptions
def check_value(value):
    if value < 0:
        raise CustomError("Value cannot be negative.")
    elif value == 0:
        raise CustomError("Value cannot be zero.")
    print(f"Valid value: {value}")

# Test the function
try:
    check_value(-1)  # Raises a custom exception
except CustomError as e:
    print(f"Error: {e}")
 """


# 11) Write a Python program to create a class and access the properties of the class using an object. 

# Define a class
""" class Person:
    def __init__(self, name, age):
        self.name = name  # Property to store the name
        self.age = age    # Property to store the age

    def fun(self):
        print(f"Name: {self.name}, Age: {self.age}")

# Create an object of the class
person1 = Person("Alice", 25)

# Access the properties of the class
print(f"Person's Name: {person1.name}")
print(f"Person's Age: {person1.age}")

# Call the method of the class
person1.fun()
 """


# 12) Write a Python program to demonstrate the use of local and global variables in a class. 
""" a=5
class ex:
    def fun(self):
        b=25
        print(f"Local variable b: {b}")
        print(f"Global variable a: {a}")
        
obj = ex()
obj.fun()
 """
 


 
# 13) Write a Python program to show single inheritance. 
""" 
class A:
    def fun1(slef):
        print("This is function 1")
class B(A):
    def fun2(self):
        print("This is function 2")
        
obj = B()
B.fun1()
B.fun2()
 """
 
# 14) Write a Python program to show multilevel inheritance. 

""" class grandparent():
    def __init__(self):
        print("grandparent class called!!")
class parent(grandparent):
    def __init__(self):
        super().__init__()
        print("parent class called!!")
class child(grandparent,parent):
    def __init__(self):
        super().__init__()
        print("child class called!!")
obj = child()  """

# 15) Write a Python program to show multiple inheritance.

""" class Father:
    def __init__(self):
        print("Father class constructor called!")

class Mother:
    def __init__(self):
        print("Mother class constructor called!")

class Child(Father, Mother):
    def __init__(self):
        # Call both parent constructors
        Father.__init__(self)  # Explicitly call Father's constructor
        Mother.__init__(self)  # Explicitly call Mother's constructor
        print("Child class constructor called!")

obj = Child()        
 """

# 16) Write a Python program to show hierarchical inheritance. 
"""
class Parent:
    def __init__(self):
        print("Parent class constructor called!")

    

class Child1(Parent):
    def __init__(self):
        super().__init__()
        print("Child1 class constructor called!")

class Child2(Parent):
    def __init__(self):
        super().__init__()
        print("Child2 class constructor called!")


child1_obj = Child1()


child2_obj = Child2()
 """



# 17) Write a Python program to show hybrid inheritance. 
""" class Grandparent:
    def __init__(self):
        print("Grandparent class constructor called!")

class Parent1(Grandparent):
    def __init__(self):
        super().__init__()
        print("Parent1 class constructor called!")

class Parent2(Grandparent):
    def __init__(self):
        super().__init__()
        print("Parent2 class constructor called!")

class Child(Parent1, Parent2):
    def __init__(self):
        super().__init__()  # Resolves based on MRO
        print("Child class constructor called!")

# Create an object of the Child class
child_obj = Child()
 """


# 18) Write a Python program to demonstrate the use of super() in inheritance. 


""" class A:
    def fun1(slef):
        print("This is function 1")
class B(A):
    def fun1(self):
        super().fun1()
        print("This is function 2")
        
obj = B()
obj.fun1()

"""


# 19) Write a Python program to show method overloading. 
# 20) Write a Python program to show method overriding. 
""" class A:
    def add(self, a, b=0):
        return a + b

# Create an object of the class
calc = A()

# Call the method with one or two arguments
print(calc.add(5))      # Output: 5
print(calc.add(5, 10))  # Output: 15 """





# 21) Write a Python program to create a database and a table using SQLite3. 
import sqlite3

# Connect to the SQLite3 database (or create it if it doesn't exist)
conn = sqlite3.connect('my_database.db')

# Create a cursor object
cursor = conn.cursor()

# Create a table if it doesn't exist
cursor.execute("""
CREATE TABLE IF NOT EXISTS customer (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    price INTEGER NOT NULL
)
""")

print("Database and table created successfully.")

# Commit changes and close the connection
conn.commit()
conn.close()



# 22) Write a Python program to insert data into an SQLite3 database and fetch it. 

# Connect to the SQLite3 database
conn = sqlite3.connect('my_database.db')

# Create a cursor object
cursor = conn.cursor()

# Insert data into the table
cursor.execute("INSERT INTO customer (name, price) VALUES (?, ?)", ('Alice', 100))
cursor.execute("INSERT INTO customer (name, price) VALUES (?, ?)", ('Bob', 200))

# Commit the changes
conn.commit()

print("Data inserted successfully.")

# Fetch and display the data
cursor.execute("SELECT * FROM customer")
rows = cursor.fetchall()

print("\nCustomer Table Data:")
for row in rows:
    print(f"ID: {row[0]}, Name: {row[1]}, Price: {row[2]}")

# Close the connection
conn.close()