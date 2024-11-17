import random
n = random.randint
d = {}

while True:
    menu = """
        press 1 for Signup
        press 2 for login
        press 3 for forget password
        press 4 for exit
     """
    
    print(menu)
    choice = int(input("Enter a choice :"))

    if choice==1:
        print("***************************Welcome to signup page***************************")
        name = input("Enter yiur name :")
        email = input("Enter your Email :")
        mobile = int(input("Enter your mobile number :"))
        password = int(input("Enter your password :"))
        cpassword = int(input("Enter your confirm password :"))

        if password==cpassword:
            d['name']=name
            d['email']=email
            d['mobile']=mobile
            d['password']=password
            print("signup successfully")


        else:
            print("Password and confirm password does not match")

    elif choice==2:
        print("***************************Welcome to login page***************************")
        email = input("Enter your e mail :")
        password = int(input("Enter your password :"))
        if d['email']==email:
            if d['password']==password:
                print("Login successfully")
            else:
                print("password does not match")
        else:
            print("Email does not match")

    elif choice == 3:
        print("***************************Welcome to forget password page***************************")
        mobile = int(input("Enter your mobile number :"))

        if d['mobile']==mobile:
            print("your OTP is",n)

            otp= int(input("Enter your OTP :"))

            if n==otp:
                password= int(input("Enter your new password :"))
                d['password']= password
                print("Password updated successfully")

            else:
                print("INVALID otp")

        else:
            print("Mobile number does not exist")

    elif choice == 4:
        print("Thankyou to visit!!!")
        break

    else:
        print("Enter valid choice!!!!!!!!!!!!!")
        break







        

              
           


    

    