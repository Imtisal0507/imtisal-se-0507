"""
def myfun(n): #parameters

    for i in range(1,n+1):
        print("*"*i)


n = int(input("Enter a number :"))
myfun(n) #arguments

def myfun():
    n = int(input("Enter a number :"))
    fac = 1

    for i in range(1,n+1):
        fac*=i

    return fac

print(myfun())
def greatest(n):
    n1 = int(input("Enter a number :"))
    n2 = int(input("Enter a number :"))
    n3 = int(input("Enter a number :"))

    if n1>n2:
        if n1>n3:
            print("n1 is greatest")

        else:
            print("n3 is greatest")

    else:
        print("n2 is greatest")
n = print("This is perameter")
print(greatest(n))



import random

n = random.randint(1001,9999)
print(n)

"""
import math

print(math.factorial(5))