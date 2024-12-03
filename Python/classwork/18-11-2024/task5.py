try:
    n = int(input("Enter a number : "))
    fac =1
    for i in range(1,n+1):
        fac*=i
    print(fac)

except ValueError as e:
    print(e)

else:
    print("Try executed!!!")

finally:
    print("Finally called!!!")







