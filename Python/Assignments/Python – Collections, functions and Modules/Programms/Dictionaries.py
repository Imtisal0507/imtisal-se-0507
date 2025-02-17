# 13) Write a Python program to create a dictionary of 6 key-value pairs.
""" d={1:11,2:22,3:33}
print(d) """


# 14) Write a Python program to access values using keys from a dictionary
""" d={1:11,2:22,3:33}
print(d[1]) """


# 15) Write a Python program to update a value at a particular key in a dictionary.
""" d={1:'python',2:'cpp'}
print(d)
for key in d:
    if key == 2:
        d[key] = 'java'
print(d)  
 """
 
 
 
# 16) Write a Python program to separate keys and values from a dictionary using keys() and values() methods. 
""" d={1:'python',2:'cpp',3:'java',4:'php'}
print("Keys: ", d.keys())
print("Values: ", d.values())
 """
 
 
# 17) Write a Python program to convert two lists into one dictionary using a for loop.
""" l=[1,2,3]
v=['python','html','java']
d={}
for i in range(len(l)):
    d[l[i]]=v[i]
print(d) """


# 18) Write a Python program to count how many times each character appears in a string. 
""" s='hello'
d={}
for i in s:
    if i in d:
        d[i]+=1
    else:
        d[i]=1
print(d)  """