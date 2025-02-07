from django.db import models
from django.utils import timezone


# Create your models here.


class User(models.Model):
    usertype = models.CharField(max_length=20,default="buyer")
    name=models.CharField(max_length=50)
    email=models.EmailField(unique=True)
    mobile=models.BigIntegerField(unique=True)
    password=models.CharField(max_length=20)
    uprofile=models.ImageField(default="",upload_to='profile/')

    def __str__(self):
        return self.name
    

class Product(models.Model):
    seller = models.ForeignKey(User, on_delete= models.CASCADE)
        
    category = (
        ("Men", "Men"),
        ("Women", "Women"),
        ("Kids", "Kids"),
    )

    brand = (
        ("Raymond", "Raymond"),
        ("Levis", "Levis"),
        ("DNMX", "DNMX"),
        ("LEECooper", "LEECooper"),
        ("NetPlay", "NetPlay"),
    )

    size = (
        ("S", "S"),
        ("M", "M"),
        ("L", "L"),
        ("XL", "XL"),    
    )
    scategory = models.CharField(max_length=40,choices=category)
    sbrand = models.CharField(max_length=40,choices=brand)
    ssize = models.CharField(max_length=40,choices=size)
    pname = models.CharField(max_length=100)
    price = models.IntegerField()
    description = models.TextField()
    image = models.ImageField(upload_to='product/')

    
    def __str__(self):
        return self.pname

class Wishlist(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    product = models.ForeignKey(Product, on_delete=models.CASCADE)
    ttime =  models.DateTimeField(default=timezone.now)

class Cart(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    product = models.ForeignKey(Product, on_delete=models.CASCADE)

    
   