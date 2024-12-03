try:
    n1 = int(input("Enter a number 1 : "))
    n2 = int(input("Enter a number 2 : "))

    print("Division :",n1/n2)

    
except ValueError as e:
    print(e)


except ZeroDivisionError as e:
    print(e)
