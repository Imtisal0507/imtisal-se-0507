for i in range (1,6):
    for j in range (1,i+1):
        print("*",end="")

    print()


for i in range (1,6):
    for k in range (1,6-i):
        print("",end=" ")

    for j in range (1,i+1):
        print(" *",end="")

    print()

for i in range (1,6):
    print("*"*i)

for i in range (1,6):
    print(" "*(6-i)," *"*i)
