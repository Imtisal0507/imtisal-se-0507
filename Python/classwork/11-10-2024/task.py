"""

n = int(input("Enter a number :"))
for i in range (1,n+1,1):
    print(i)



for i in range (1,6,1):
    n = int(input("Enter number :")) 
    ev=0
    od=0
    sum=0
    sum1=0

   



    if n==0:
        print("ZERO")
        

    elif n%2==0:
        print("NUMBER IS EVEN")
        ev+=1
        sum+=0


    else:
        print("NUMBER IS ODD")
        od+=1
        sum1+=0

print("Count of EVEN :",ev)
print("Count of ODD :",od)
print("Sum of EVEN :",sum)
print("Sum of ODD :",sum1)



n = int(input("Enter number :"))
fac=1

for i in range(1,6):
    fac*=i
print(fac)



n = int(input("Enter number :"))
prime=1

for i in range(1,6):
    if(n%i==0):
        prime+=1

if (prime==2):
    print("NUMBER IS PRIME!!!!!!!!!!!!")
else:
    print("NUMBER IS NOT PRIME!!!!!!!!")

"""



    

