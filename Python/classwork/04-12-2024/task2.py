from task1 import *



mydb = pymysql.connect(host="localhost",user="root",password="",database="mydb36")
mycursor = mydb.cursor()
try:

    while True:
        menu ="""
        press 1 for Insert Data 
        press 2 for Update Data
        press 3 for Delete Data
        press 4 for Fetch Data
        press 5 for Exit Data


    """

        print(menu)


        choice = int(input("Enter a choice :"))

        if choice == 1:
            name = input("Enter a name :")
            price = int(input("Enter a price :"))


            query = "insert into customer(name,price) values('%s','%s')"
            args = (name,price)

            mycursor.execute(query % args)
            mydb.commit()
            print("Data insert successfully!!!")
        elif choice == 2:
            id = int(input("Enter a ID:"))
            name = input("Enter a name :")
            price = int(input("Enter a price :"))

            query = "update customer set name='%s',price='%s'where id='%s'"
            args = (name,price,id)

            mycursor.execute(query % args)
            mydb.commit()
            print("Uodate successfully in Data!!!")
        elif choice ==3:
            id = int(input("Enter id:"))
            query="delete from customer where id='%s'"
            args= (id)

            mycursor.execute(query % args)
            mydb.commit()
            print("Delete sucessfully!!!")

        elif choice==4:
            query = "select * from customer"

            mycursor.execute(query)

            data = mycursor.fetchall()
            print(data)


        elif choice == 5:
            print("Thank you to visit !!")
            break
        else:
            print("Invalid choice!!!")
            break
except ValueError as e:
    print(e)
else:
    print("Try executed!!!")

finally:
    print("Finally called!!!")
