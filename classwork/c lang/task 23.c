#include<stdio.h>
main()
{ 
int c,d,temp;  
 printf("enter value C : ");
 scanf("%d",&c);
 printf("enter value D : " );
 scanf("%d",&d);  
 temp=c;
 c=d; 
 d=temp; 
 printf("\after swapping value C : %d", c);
 printf("\after swapping value D : %d", d);
 
}
