"""
a = int(input("Enter a year : "))
days = 365
print(a*days)





a = int(input("Enter a days :"))
year = 365

print(a/year)



a = int(input("Enter a first number :"))
b = int(input("Enter a second number :"))

temp = a 
a = b
b = temp 


print(a)
print(b)




n = int(input("Enter a number :"))

if n==0:
    print("Number is zero!!!")

elif n%2==0:
    print("Number is even!!!")
else:
    print("Number is odd!!!")
    




n1 = int(input("Enter a 1 number :"))
n2 = int(input("Enter a 2 number :"))

if n1==n2:
    print("please enter valid number")
elif n1>n2:
    print("n1 is greatest!!!")

else:
    print("n2 is greatest!!!")




n = int(input("Enter a marks out of 100 :"))

if n>100:
    print("Please enter marks under 100!!!!!")

elif n>80:
    print("Congratulation your result is first class!!!!!!!!!")
elif n>70:
    print("Congratulation your result is second class!!!!!!!!!")
elif n>50:
    print("Your result is average!!!!!!!!")
elif n<33:
    print("Sorry you are fail in exam!!!!!!!!!!!!!!!!!!!")
else:
    print("Enter valid number!!!!!!!!!!")


"""

n1 = int(input("Enter n1 :"))
n2 = int(input("Enter n2 :"))
n3 = int(input("Enter n3 :"))

if n3>n1:
    if n2>n3:
        print("n2 is greatest!!!!!!!!!!")
    else:
        print("n3 is greatest!!!!!!!!!!!!!")
else:
    print("n1 is greatest!!!!!!!!!!!!!!!!!")



