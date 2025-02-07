"""
URL configuration for myproject project.

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/5.1/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.urls import path
from myapp import views
from django.conf import settings
from django.conf.urls.static import static

urlpatterns = [
    path('index/', views.index, name='index'),
    path('sindex/', views.sindex, name='sindex'),
    path('about/', views.about, name='about'),
    path('signup/', views.signup, name='signup'),
    path('login/', views.login, name='login'),
    path('logout/', views.logout, name='logout'),
    path('shop/', views.shop, name='shop'),
    path('cart/', views.cart, name='cart'),
    path('product-single/', views.productsingle, name='product-single'),
    path('cpass/', views.cpass, name='cpass'),
    path('scpass/', views.scpass, name='scpass'),
    path('fpass/', views.fpass, name='fpass'),
    path('otp/', views.otp, name='otp'),
    path('newpass/', views.newpass, name='newpass'),
    path('cprofile/', views.cprofile, name='cprofile'),
    path('scprofile/', views.scprofile, name='scprofile'),
    path('add/', views.add, name='add'),
    path('view/', views.view, name='view'),
    path('update/<int:pk>', views.update, name='update'),
    path('delete/<int:pk>' ,views.delete, name='delete'),
    path('mdetail/<int:pk>' ,views.mdetail, name='mdetail'),
    path('addwish/<int:pk>' ,views.addwish, name='addwish'),
    path('wishlist/' ,views.wishlist, name='wishlist'),
    path('dwishlist/<int:pk>' ,views.dwishlist, name='dwishlist'),
    path('addcart/<int:pk>' ,views.addcart, name='addcart'),
    path('cart/' ,views.cart, name='cart'),
    path('dcart/<int:pk>' ,views.dcart, name='dcart'),
    path('checkout/' ,views.checkout, name='checkout'),



    

]+ static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)
