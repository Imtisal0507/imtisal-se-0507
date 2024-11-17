l = [1,2,3,"hello","Imtisal",8.25,20.30]

l.append(100)               #add a number in last
print(l)
                      
print(l.count(1))             #for counting

l.extend([100,500,300])                #for add elements in last
print(l)                

l.insert(2,"Ansari")                    #for switch a element 
print(l)

l.pop(2)                 #for remove element
print(l)

l.remove(8.25)                 #for remove perticular element
print(l)

l.reverse()             #for reverse a elements
print(l)