#include<stdio.h>
main()
{ 
int c,d,temp;  // data member 25 30
 printf("enter value C : ");
 scanf("%d",&c);
 printf("enter value D : " );
 scanf("%d",&d);  // data member 25 30
 temp=c; // temp =30
 c=d; // a=25
 d=temp; //b=30
 printf("\after swapping value C : %d", c);
  printf("\after swapping value D : %d", d);
 
}
