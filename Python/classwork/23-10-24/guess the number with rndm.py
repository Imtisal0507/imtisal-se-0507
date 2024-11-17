import random
print("*"*50,"WELCOME TO THE GAME",50*"*")
print("*"*50,"PLEASE GUESS THE NUMBER BETWEEN 1 TO 50",50*"*")
n = random.randint(1,51)

while True:
    choice = int(input("Enter a choice :"))

    if choice==0:
        print("PLEASE ENTER VALID NUMBER 1 TO 50")
    elif choice>50:
        print("PLEASE ENTER NUMBER 1 TO 50")    

    elif choice>n:
        print("YOUR CHOICE IS GREATER THAN THE NUMBER")
    elif choice<n:
        print("YOUR CHOICE IS LESSS THAN THE NUMBER")
    elif choice==n:
        print(50*"*","YOU ARE WIN",50*"*")
        break
    else:
        print("ENTER VALID NUMBER BETWEEN 1 TO 50")