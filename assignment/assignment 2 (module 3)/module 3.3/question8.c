#include <stdio.h>
#include <string.h>

void reverseString(char *str, char *reversed) 
{   int i;
    int length = 0;

    while (str[length] != '\0') 
	{
        length++;
    }

    for (i = 0; i<=length;i++) 
{
        reversed[i] = str[length - 1 - i];
    }

    reversed[length] = '\0';
}

int isPalindrome(char *str, char *reversed) 
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != reversed[i]) {
            return 0; 
        }
        i++;
    }
}

int main() {
    char str[100];
    char reversed[100];

    printf("Enter a string: ");
    gets(str);  

    reverseString(str, reversed);

    printf("Reversed string: %s\n", reversed);

    if (isPalindrome(str, reversed)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

