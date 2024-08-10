// right angle star two side 
#include <stdio.h>
main()

{
    int n= 6,i,j;
   
    
    for (i = 1; i <= n; i++) // this is for upper side star
	{
        for (j = 1; j <= i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--)  // this is for lower side star
	{
        for (j = 1; j <= i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }

    
}

