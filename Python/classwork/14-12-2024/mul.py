

class User:
    def __init__(self,a,b):
        print("Constructor called!!!")

        self.a=a
        self.b=b


        

    def __str__(self):
        print("str is called!!!")

        return f"{self.a},{self.b}"
    def __mul__(self,obj):
        print("Add call!!!")

        x = self.a*obj.a
        y = self.b * obj.b
        return x,y
    
    
    

obj = User(10,20)
print(obj)

obj1 = User(30,40)
print(obj1)

print("Multiplication :",obj*obj1)
