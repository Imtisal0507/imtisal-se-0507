print("*"*50,"Welcome to KBC","*"*50)
print("HOW MANY ROUND YOU WANT TO PLAY???")


question = [
    ["Who is prime minister of india ?", "narendra modi","Rahul gandhi","Indira gandhi","Amit shah"]

]
print(question)
answer = int(input("Enter answer :"))
if answer == question[1]:
    print("You are win")

else:
    print("Loss")
