//WAP to find reverse of string using recursion  
#include <stdio.h>
reverseString(char *str, int start, int end) 
{
    if (start >= end) 
	{
        return;
    }

    char temp = str[start];          // swapping
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}

main() 
{
    char str[] = "Hello, World!";     // char

    int length = 0;
    while (str[length] != '\0') 
	{
        length++;                 //increment in length
    }

    reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

}

