//WAP to make addition, Subtraction and multiplication of two matrix using 
//2-D Array 
#include<stdio.h>
add()
{   
    int a[2][3],b[2][3];
    int i,j;
    printf("ADDITION\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);    // addition of 2 d array
		}
		printf("\n");
	}
	
}
sub()
{
    int a[1][1],b[1][1];
    int i,j;
    printf("SUBSTRACTION\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]-b[i][j]);  //sub of 2 d array
		}
		printf("\n");
	}	
}
mul()
{
	int a[2][3],b[2][3];
    int i,j;
    printf("MULTIPLICATION\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]*b[i][j]);   //mul of 2 d array
		}
		printf("\n");
	}
}
main()
{
	add();
	sub();
	mul();
}

