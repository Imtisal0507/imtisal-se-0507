"""
s = input("Enter a string :")

if len(s)%2==0:
    print(s)


else:
    s1 = int(len(s)/2)

    print(s[s1-1]+s[s1]+s[s1+1])

"""

def palindrome():

    s = input("Enter a string :")
    s1=s[::-1]

    if (s==s1):
        print("Palindrome!!!")

    else:
        print("Not palindrome!!!")

palindrome()