#include <stdio.h>
main()

{
    int n= 6,i,j;
   
    
    for (i = 1; i <= n; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }

    
}

