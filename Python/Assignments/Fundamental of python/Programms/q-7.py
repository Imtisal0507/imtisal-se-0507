a = int(input("Enter a Number 1 : "))
b = int(input("Enter a Number 2 : "))
c = int(input("Enter a Number 3 : "))

if a==b or b==c or c==a:    # check if two numbers are same or not
    print("Sum = 0 ")       # if two numbers are same sum is zero.

else:                       # if three numbers are different then find sum.
    print(f"Sum = {a+b+c}")
