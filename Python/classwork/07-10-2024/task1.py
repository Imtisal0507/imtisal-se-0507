# Swapping using a temporary variable
def swap_numbers(a, b):
    temp = a
    a = b
    b = temp

a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
a, b = swap_numbers(a, b)
