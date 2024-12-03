d = {}
balance =5000
import random
ac_no = random.randint(100000000000001,999999999999999)

class Bank:
    def register(self):
        name = input("Enter your name : ")
        email = input("Enter your E-mail : ")
        password = input("Enter your Password : ")
        cpassword = input("Enter your Confirm-Password : ")

        if password==cpassword:
            print("Regestration successfully!!!")

            print("Your genrated account number is :",ac_no)
            print("Your balance is :",balance)

            d['name']=name
            d['email']=email
            d['password']=password
            d['ac_no']=ac_no
        else:
            print("Your Password & confirm password is not match!!!!!!!!!!!!!!")

    def login(self):
        ac_no=int(input("Enter your Account number :"))
        password=int(input("Enter your password : "))


        if d['ac_no']==ac_no:
            if d['password']==password:
                print("Login successfully!!!!!!!!")

            else:
                print("Incorrect password!!")

        else:
            print("Incorrect  account number!!!!!")


    def wi(self):
        wamount = int(input("Enter your withdraw amount :"))

        if wamount>balance:
            print("Invalid balance!!!!!")

        else:
            self.balance = self.balance-wamount
    def de(self):
        damount = int(input("Enter deposit amount :"))

        self.balance = self.balance+damount

    def check(self):
        print("Your available balance is :",self.balance)

obj = Bank()

        
        
        

