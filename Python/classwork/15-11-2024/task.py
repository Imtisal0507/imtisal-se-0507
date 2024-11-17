d ={'p':10,'q':20,'r':30}
d1 ={'p':30,'s':40}

c = {i: d.get(i, 0) + d1.get(i, 0) 
     for i in set(d).union(d1)}
print(c)