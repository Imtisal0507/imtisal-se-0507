def palindrome():

    s = input("Enter a string :")
    s1=s[::-1]

    if (s==s1):
        print("Palindrome!!!")

    else:
        print("Not palindrome!!!")


while True:
    menu = """

    press 1 for palidrone
    press 2 for exit


    """
    print(menu)
    choice = int(input("Enter your choice :"))

    


    if choice==1:
        palindrome()

    elif choice==2:
        print("Thank you")
        break

    else:
        print("JGYVHB")










