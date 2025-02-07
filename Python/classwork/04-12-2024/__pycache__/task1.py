import pymysql

mydb = pymysql.connect(host="localhost",user="root",password="")
mycursor = mydb.cursor()

mycursor.execute("create database if not exists mydb36")
mydb.commit()

mydb = pymysql.connect(host="localhost",user="root",password="",database="mydb36")
mycursor = mydb.cursor()

mycursor.execute("create table if not exists customer(id int primary key auto_increment,name varchar(20),price int)")
mydb.commit()