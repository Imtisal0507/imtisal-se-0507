from django.shortcuts import render,redirect

from .models import *
from django.conf import settings
from django.http import JsonResponse,HttpResponse
import random
import requests
from django.views.decorators.csrf import csrf_exempt
import razorpay

# Create your views here.

def index(request):
    product = Product.objects.all()
    return render(request,'index.html',{'product':product})

def cpass(request):
    user = User.objects.get(email=request.session['email'])
 
    if request.method=="POST":
        try:
          
            if user.password==request.POST['opassword']:

                if request.POST['npassword']==request.POST['cnpassword']:
                    user.password = request.POST['npassword']
                    user.save()
                    return redirect('logout')
                else:
                    msg = "Password & Confirm password does not match!!!"
                    if user.usertype=="buyer":
                        return render(request,'cpass.html',{'msg':msg})
                    else:
                        return render(request,'scpass.html',{'msg':msg})
            else:
                msg = "Old password does not match!!!"
                if user.usertype=="buyer":
                    return render(request,'cpass.html',{'msg':msg})
                else:
                    return render(request,'scpass.html',{'msg':msg})



        except:
            pass
             
             
    else:
        if user.usertype=="buyer":
            return render(request,'cpass.html')
        else:
            return render(request,'scpass.html')


def about(request):
    return render(request ,'about.html')


def signup(request):
    if request.method=="POST":
        try:
            user = User.objects.get(email=request.POST['email'])
            msg = "Email already exist!!!"
            return render(request,'signup.html',{'msg':msg})
        except:
            if request.POST['password']==request.POST['cpassword']:
                User.objects.create(
                usertype = request.POST['usertype'],
                name = request.POST['name'],
                email = request.POST['email'],
                mobile = request.POST['mobile'],
                password = request.POST['password'],
                uprofile= request.FILES['uprofile']
                )
                msg = "Signup Sucessfully!!!"
                return render(request,'login.html',{'msg':msg})
            
            
            
            else:
                msg = "Password & confirm password does not match!!!"
                return render(request,'signup.html',{'msg':msg})

                
                
           

            
            
    else:
        return render(request,'signup.html')
    

@csrf_exempt
def login(request):
    if request.method=="POST":


        try:
            user = User.objects.get(email=request.POST['email'])

            if user.password == request.POST['password']:
                request.session['email']=user.email
                request.session['uprofile']=user.uprofile.url
                if user.usertype=="buyer":
                    return redirect('index')
                else:
                    return redirect('sindex')

                    
            else:
                msg = "Invalid Password!!!"
                return render(request,'login.html',{'msg':msg})

        except:
            msg = "Invalid Email!!!"
            return render(request,'login.html',{'msg':msg})
    else:
        return render(request,'login.html')
    
def logout(request):
    del request.session['email']
    del request.session['uprofile']

    return redirect('login')

    
def shop(request):
    return render(request ,'shop.html')

def cart(request):
    return render(request ,'cart.html')

        
                   
def productsingle(request):
    return render(request ,'product-single.html') 



def fpass(request):
    if request.method == "POST":
        try:
            user = User.objects.get(mobile=request.POST['mobile'])
            mobile =  request.POST['mobile']
            otp = random.randint(1001,9999) 
            url = "https://www.fast2sms.com/dev/bulkV2"

            querystring = {"authorization":"4FLqt2yEconSrjiDwMvY19AXNB308IKZpWTkehHuxf7bVdG5aOjkV09BWEUrcpAST5JOZQs2dFoYxe8D","variables_values":str(otp),"route":"otp","numbers":str(mobile)}

            headers = {
                'cache-control': "no-cache"
            }

            response = requests.request("GET", url, headers=headers, params=querystring)

            print(response.text)

            request.session['mobile']=user.mobile
            request.session['otp']=otp

            return render(request,'otp.html')

        except Exception as e:
                msg = "Mobile not found!!"
                print('*',e) 
                return render(request,'fpass.html',{'msg':msg})


    else:
        return render(request,'fpass.html')
    


def otp(request):
    if request.method == "POST":
        
        try:

            uotp=int(request.POST['uotp'])
            otp= int(request.session['otp'])

            uotp=int(request.POST['uotp'])
            otp= int(request.session['otp'])


            uotp = request.POST.get('uotp') 
            otp = str(request.session.get('otp')) 
            
            print(f"Session OTP: {otp}")
            print(f"User entered OTP: {uotp}")




            

            if otp == uotp:
                del request.session['otp']
                return render(request,'newpass.html')
            else:
                msg = "Invalid OTP!!"
                return render(request,'otp.html',{'msg':msg})
            
            
        except Exception as e:
            print(f"Error during OTP validation: {e}")
            return render(request,'otp.html')
    


            

def newpass(request):
    if request.method == "POST":
        try:
            user = User.objects.get(mobile=request.session['mobile'])
            if request.POST['npassword']==request.POST['cnpassword']:
                user.password = request.POST['npassword']
                user.save()
                del request.session['mobile']
                return redirect('login')
            else:
                msg = "New password & confirm new passwoerd does not match!!"   
                return render(request,'newpass.html',{'msg':msg})
        except User.DoesNotExist:
            msg = "User does not exist or session expired."
            return render(request, 'newpass.html', {'msg': msg})
        
        except Exception as e:
            print('***************',e)
            msg = "An unexpected error occurred. Please try again."
            return render(request, 'newpass.html', {'msg': msg})
    else:
        return render(request, 'newpass.html')
    
def cprofile(request):
    user = User.objects.get(email=request.session['email'])
    
    if request.method == "POST":
    
        user.name=request.POST['name']
        user.mobile=request.POST['mobile']
        try:
            user.uprofile = request.FILES['uprofile']
            user.save()
            request.session['uprofile']=user.uprofile.url
            if user.usertype=="buyer":
                return redirect('index')
            else:
                return redirect('sindex')
            
        except Exception as e:
            print("*******************",e)
        user.save()
        return redirect('index')

        
    else:
            if user.usertype=="buyer":
                return render(request,'cprofile.html',{'user':user})
            else:
                return render(request,'scprofile.html',{'user':user})

        
            
    

def sindex(request):
    return render(request,'sindex.html')

def scpass(request):
    return render(request,'scpass.html')

def scprofile(request):
    return render(request,'scprofile.html')

def add(request):
    if request.method == "POST":
        seller = User.objects.get(email=request.session['email'])
        
        try:
           Product.objects.create(
               
            seller = seller,
            pname = request.POST['pname'],
            scategory = request.POST['scategory'],
            sbrand = request.POST['sbrand'],
            ssize = request.POST['ssize'],
            price = request.POST['price'],
            description = request.POST['description'],
            image = request.FILES['image']
           )
           msg = "Product added succesfully!!!"
           return render(request,'add.html',{'msg':msg})
        except Exception as e:
            print("****************",e)
            return render(request,'add.html')

    else:
        return render(request,'add.html')
 


def view(request):
    seller = User.objects.get(email = request.session['email'])
    product = Product.objects.filter(seller=seller)

    return render(request,'view.html',{'product':product})

def update(request, pk):
    seller = User.objects.get(email=request.session['email'])
    product = Product.objects.get(pk=pk)

    if request.method == 'POST':
        product.name = request.POST.get('pname')
        product.description = request.POST.get('description')
        product.price = request.POST.get('price')

        image = request.FILES.get('image')
        if image:
            product.image = image 
          
        product.save() 

        return redirect('update', pk=product.pk) 
    else:
        return render(request, 'update.html', {'product': product})

def delete(request,pk):
    seller = User.objects.get(email=request.session['email'])
    product = Product.objects.get(pk=pk)
    
    product.delete()
    return redirect('view')

def mdetail(request,pk):
    w = False
    user = User.objects.get(email=request.session['email'])
    product = Product.objects.get(pk=pk)

    try:
        wishlist = Wishlist.objects.get(user=user,product=product)
        w = True
    except:
        pass
    return render(request,'mdetail.html',{'product':product,'w':w})

def addwish(request,pk):
    user = User.objects.get(email=request.session['email'])
    product = Product.objects.get(pk=pk)


    Wishlist.objects.create(
        user=user,
        product = product
    )


    return redirect('wishlist')


def wishlist(request):
    user = User.objects.get(email=request.session['email'])
   


    wishlist = Wishlist.objects.filter(user=user)


    return render(request,'wishlist.html',{'wishlist':wishlist})



def dwishlist(request,pk):
    user = User.objects.get(email=request.session['email'])
   


    wishlist = Wishlist.objects.get(pk=pk)


    wishlist.delete()


    return redirect('wishlist')

def addcart(request,pk):
    user = User.objects.get(email=request.session['email'])
    product = Product.objects.get(pk=pk)
   


    Cart.objects.create(
        user=user,
        product = product,
        # cprice = product.price,
    )


    return redirect('cart')

def cart(request):
    try:
        user = User.objects.get(email=request.session['email'])  # Get the user based on the session
        cart_items = Cart.objects.filter(user=user)  # Get all cart items for this user
        
        # Calculate total price
        total_price = sum(item.product.price for item in cart_items)  # Assuming the product has a 'price' attribute
        
    except User.DoesNotExist:
        cart_items = []  # If no user is found, cart is empty
        total_price = 0  # Set total price to 0
    
    
    return render(request, 'cart.html', {'cart': cart_items, 'total_price': total_price})


def dcart(request,pk):
    user = User.objects.get(email=request.session['email'])
   


    cart = Cart.objects.get(pk=pk)


    cart.delete()


    return redirect('cart')

def checkout(request):
    return render(request,'blog-single.html')