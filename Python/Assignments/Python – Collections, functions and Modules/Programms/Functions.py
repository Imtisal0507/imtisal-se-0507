#19) Write a Python program to print a string using a function. 
""" def fun2():
    s="hello"
    print(s)
fun2() """

#20) Write a Python program to create a parameterized function that takes two arguments and prints their sum. 
""" def fun3(a,b):
    print(a+b)
fun3(5,7)  # Output: 12 """


#21) Write a Python program to create a lambda function with one expression. 
""" lam=lambda x:x**2
print(lam(5))  # Output: 25 """

#22) Write a Python program to create a lambda function with two expressions. 
# Lambda function with a conditional expression
l_fun = lambda x, y: x + y if x > y else x * y

# Call the lambda function
l2 = l_fun(3, 9)
print(l2)