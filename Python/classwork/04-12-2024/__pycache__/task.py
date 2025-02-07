from tkinter import *

root = Tk()

root.geometry('500x500')
root.title("Singup-Form")

id = Label(root,text="Id",font=("Arial",12,"bold"))
id.place(x=50,y=50)

name = Label(root,text="Name",font=("Arial",12,"bold"))
name.place(x=50,y=100)

email = Label(root,text="E-Mail",font=("Arial",12,"bold"))
email.place(x=50,y=150)

mobile = Label(root,text="Mobile",font=("Arial",12,"bold"))
mobile.place(x=50,y=200)

password = Label(root,text="Password",font=("Arial",12,"bold"))
password.place(x=50,y=250)

cpassword = Label(root,text="Confiirm-Password",font=("Arial",12,"bold"))
cpassword.place(x=50,y=300)

insert = Button(root,text="Insert",font=("Arial",16,"italic"),fg="red")
insert.place(x=50,y=350)


update = Button(root,text="Update",font=("Arial",16,"italic"),fg="red")
update.place(x=150,y=350)

delete = Button(root,text="Delete",font=("Arial",16,"italic"),fg="red")
delete.place(x=270,y=350)

login = Button(root,text="Login",font=("Arial",16,"italic"),fg="red")
login.place(x=380,y=350)


eid = Entry(root,bg="yellow")
eid.place(x=250,y=60)

ename = Entry(root,bg="yellow")
ename.place(x=250,y=110)

eemail = Entry(root,bg="yellow")
eemail.place(x=250,y=160)

emobile = Entry(root,bg="yellow")
emobile.place(x=250,y=210)

epassword = Entry(root,bg="yellow")
epassword.place(x=250,y=260)

ecpassword = Entry(root,bg="yellow")
ecpassword.place(x=250,y=310)









root.mainloop()