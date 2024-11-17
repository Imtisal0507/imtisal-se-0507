import random
l = ["Rock","Paper","Scissor"]
l2 =[]

l1 = random.choice(l)

print("*"*30,"Welcome to the game","*"*30)
for i in range(1,5):

    print("*",*30,f"Round {i} is started","*"*30)


    menue = """
    press r for ROck
    press p for Paper
    press s for Scissor



"""

    print (menue)

    uchoice = input("Enter choice: ")
    if uchoice=="r" or uchoice=="R" or uchoice=="p" or uchoice=="P" or uchoice=="s" or uchoice=="S":

        if l1=="Rock" and uchoice=="r" or l1=="Paper" and uchoice=="p" or l1=="Scissor" and uchoice=="s":
            print("It's tie!!!")

        elif l1=="Rock" and uchoice=="p" or uchoice=="P":
            print("Computer choice is :",l1)
            print("User choice is :",uchoice)
            print("User win!!!")
            l2.append(100)
        elif l1=="Paper" and uchoice=="s" or uchoice=="S":
            print("Computer choice is :",l1)
            print("User choice is :",uchoice)
            print("User win!!!")
            l2.append(100)

        elif l1=="Scissor" and uchoice=="r" or uchoice=="R":
            print("Computer choice is :",l1)
            print("User choice is :",uchoice)
            print("User win!!!")
            l2.append(100)
        else:
            print("Computer choice is :",l1)
    else:
        print("Invalid choice!!!")

sum = 0
for i in l2:
    sum+=i

print("Your score is :",sum)


if sum>=300:
    print("Ecxelent")

elif sum<=300:
    print("Good")
else:
    print("Good luck for next time!!!")


