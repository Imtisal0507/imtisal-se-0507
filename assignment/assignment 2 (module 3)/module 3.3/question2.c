#include<stdio.h>
main()

{
    int a,b;
    int choice;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values of a : ");
    scanf("%d",&a);
    printf("Enter the values of b: ");
    scanf("%d",&b);
    printf("Enter your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1	:
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case 2	:
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case 3	:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4	:
        printf("Division of Two Numbers is %.2f : ",(float)a/b);
        break;
    default	:
        printf(" Enter Your choice between 1 to 4!!!!!!!!!");
        break;
    }
}

