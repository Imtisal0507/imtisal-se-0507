"""
vowels = "aeiouAEIOU"       # Define a string containing all vowels (both lowercase and uppercase)

letter = input("Enter any letter : ")

if letter in vowels:        # Check if the entered letter is in the string of vowels or not
    print(f"{letter} is Vowel.")
else:
    print(f"{letter} is not Vowel.")
    
"""

l = input("Enter any letter : ")

if l == 'a' or l == 'e' or l == 'i' or l == 'o' or l == 'u' or l == 'A' or l == 'E' or l == 'I' or l == 'O' or l == 'U':
    print(f"{l} is Vowel.")
else:
    print(f"{l} is not Vowel.")
