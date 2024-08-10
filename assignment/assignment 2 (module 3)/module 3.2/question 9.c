#include <stdio.h>
main() 

{
    int n, max= 0, remainder;

    
    printf("Enter a numbers : ");
    scanf("%d", &n);
    if (n < 0) 
	{
        n = -n;
    }
    while(n!=0) 
	{
        remainder = n%10; 

        if (remainder > max) 
		{ 
            max = remainder;
        }

        n /= 10; 
    }
    printf("The maximum digit is: %d\n", max);
}

