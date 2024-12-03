"""
file = ("C:\\Users\\imtisal\\OneDrive\\Desktop\\c programming\\imtisal-se-0507\\Python\\classwork\\18-11-2024text1.txt","w")
file.write("Hello this is python!!!")
file.close()


file = open("text1.txt","a")
file.write("\nthis is python 2!!!")
file.close()
"""

file = open("C:\\Users\\imtisal\\OneDrive\\Desktop\\c programming\\imtisal-se-0507\\Python\\classwork\\18-11-2024\\text1.txt","r")
print(file.readlines())

file.close()