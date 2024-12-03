from banking import *

print("press 1 for Register Account!!!")
print("press 2 for Registr Exit")

choice = int(input("Enter your choice :"))

if choice==1:
    obj.register()

    print("press 1 for Login")
    print("press 2 for Exit")
    ch1 = int(input("Enter a choice :"))

    if ch1==1:
        obj.login()
        while True:
            menu = """
                press 1 for Deposit
                press 2 for Withdraw
                press 3 for Check balance
                press 4 for Exit
                """
            
            print(menu)
            ch2 = int(input("Enter your choice :"))

            if ch2==1:
                print(obj.de())
            elif ch2==2:
                print(obj.wi())
            elif ch2==3:
                print(obj.check())
            elif ch2==4:
                print("Thanks to visit!!!!!!")
                break
            else:
                print("Invalid choice!!!!!")

else:
    print("Login not successfully!!!")
            





                