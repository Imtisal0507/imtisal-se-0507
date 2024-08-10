#include <stdio.h>

findMaxNumber(int a[], int size) 
{
	int i,maxNum;
    maxNum = a[0];

    for (i=1;i<size;i++) 
	{
        if (a[i]>maxNum) 
		{
            maxNum=a[i];
        }
    }

}

main() 
{
    
   int numbers[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int maxNumber = findMaxNumber(numbers, size);

    printf("The maximum number in the array is: %d\n", maxNumber);

}

