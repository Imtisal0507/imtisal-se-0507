
def insert_String(main_s,s):
        
        sl = 0
                # calculate the length of main string. 
        for i in main_s:
                sl += 1
                # Calculate the middle index of the main string
        middle = sl // 2


                # Insert the string at the middle index
        return main_s[:middle] + s + main_s[middle:]
        
        #main string
main_string = input("Enter the main string: ")

        # take user input to enter the string to insert
str = input("Enter the string to insert: ")
print(f"The new string is: {insert_String(main_string,str)}")
