import json
import logging

# Configure logging
logging.basicConfig(filename="student_management.log", level=logging.INFO, format='%(asctime)s - %(message)s')

# Student database (nested dictionary format)
students = {}

# Function to validate contact number
def validate_contact(contact):
    return contact.isdigit() and len(contact) == 10

# Function to validate name
def validate_name(name):
    return name.isalpha()

# Function to add student
def add_student():
    while True:
        student_id = input("Enter Student ID: ")
        if student_id in students:
            print("Student ID already exists. Try again!")
            continue
        
        name = input("Enter Student Name: ")
        if not validate_name(name):
            print("Invalid name! Only alphabets are allowed.")
            continue
        
        contact = input("Enter Contact Number: ")
        if not validate_contact(contact):
            print("Invalid contact number! Must be 10 digits.")
            continue
        
        students[student_id] = {"name": name, "contact": contact, "marks": {}}
        logging.info(f"Student {name} (ID: {student_id}) added.")
        print("Student added successfully!")
        break

# Function to remove student
def remove_student():
    student_id = input("Enter Student ID to remove: ")
    if student_id in students:
        confirm = input("Are you sure you want to delete this student? (Y/N): ").upper()
        if confirm == 'Y':
            del students[student_id]
            logging.info(f"Student ID {student_id} removed.")
            print("Student removed successfully!")
        else:
            print("Deletion cancelled.")
    else:
        print("Student does not exist!")

# Function to view all students
def view_students():
    if students:
        for student_id, details in students.items():
            print(f"ID: {student_id}, Name: {details['name']}, Contact: {details['contact']}")
    else:
        print("No students found!")

# Function to view specific student
def view_student():
    student_id = input("Enter Student ID: ")
    if student_id in students:
        details = students[student_id]
        print(f"ID: {student_id}, Name: {details['name']}, Contact: {details['contact']}")
    else:
        print("Student does not exist!")

# Main menu
def main():
    while True:
        print("\nStudent Management System")
        print("1. Add Student")
        print("2. Remove Student")
        print("3. View All Students")
        print("4. View Specific Student")
        print("5. Exit")
        
        choice = input("Enter your choice: ")
        
        if choice == '1':
            add_student()
        elif choice == '2':
            remove_student()
        elif choice == '3':
            view_students()
        elif choice == '4':
            view_student()
        elif choice == '5':
            print("Exiting system...")
            break
        else:
            print("Invalid choice! Please try again.")

if __name__ == "__main__":
    main()
else:
    pass
