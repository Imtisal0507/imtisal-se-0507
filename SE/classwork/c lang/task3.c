#include<stdio.h>
main()
{ 
int a,b,temp;  // data member 25 30
 printf("enter value A : ");
 scanf("%d",&a);
 printf("enter value b : " );
 scanf("%d",&b);  // data member 25 30
 temp=a; // temp =30
 a=b; // a=25
 b=temp; //b=30
 printf("\after swapping value A : %d", a);
  printf("\after swapping value B : %d", b);
 
}
