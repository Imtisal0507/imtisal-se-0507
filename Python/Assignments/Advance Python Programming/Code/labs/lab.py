##  Write a Python program to print a formatted string using print() and f-string. 

""" # Define some variables
name = "Alice"
age = 30
height = 5.6

# Using print() with concatenation
print("Name: " + name + ", Age: " + str(age) + ", Height: " + str(height))

# Using f-string for formatting
print(f"Name: {name}, Age: {age}, Height: {height}")
 """
 
 
 
## Write a Python program to read a name and age from the user and print a formatted output. 
 
"""  # Read name and age from the user
name = input("Enter your name: ")
age = int(input("Enter your age: "))

# Print a formatted output using f-string
print(f"Hello, {name}! You are {age} years old.")

"""
 
 
##  Write a Python program to open a file in write mode, write some text, and then close it. 
   
# Open the file in write mode
""" with open(r'D:\Programing\Assignment(pyhon)\Module-15\task.txt', 'w') as file:
    # Write some text to the file
    file.write("Hello, this is a test.\n")
    file.write("This text is written to the file in write mode.\n")

# The file is automatically closed after the 'with' block
print("Text has been written to 'example.txt'.")
 """



## Write a Python program to create a class and access its properties using an object. 
""" class Person:
    # Constructor to initialize the properties
    def __init__(self, name, age):
        self.name = name  # Public property
        self.age = age    # Public property

    # Method to display details
    def display_details(self):
        print(f"Name: {self.name}, Age: {self.age}")

# Create an object of the class
person1 = Person("Alice", 25)

# Access properties of the object
print("Accessing Properties:")
print(f"Name: {person1.name}")
print(f"Age: {person1.age}")

# Call a method of the class
print("\nCalling Method:")
person1.display_details()       
 """
 
 
 

## Write a Python program to handle exceptions in a simple calculator (division by zero, invalid input). AND ## Write a Python program to demonstrate handling multiple exceptions. 
def calculator():
    try:
        # Display operation menu
        op = """
        Press 1 for Addition 
        Press 2 for Subtraction
        Press 3 for Multiplication
        Press 4 for Division
        """
        print(op)

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
        print(f"An unexpected error occurred: {e}")

        # # Run the calculator
        # calculator()
## Write Python programs to demonstrate different types of inheritance (single, multiple, multilevel, etc.). 
    #single
""" class parent():
    def __init__(self):
        print("parent class called!!")
class child(parent):
    def __init__(self):
        print("child class called!!")
obj = child() 
 """
 
    #multiple
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
    #multilevel
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

    #Hierarchical 
""" class Parent:
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

    #Hybrid 
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