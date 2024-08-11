//Write a program to find simple interest  
#include <stdio.h>

main() 

{
    float amount, rate, time, simpleInterest;

    
    printf("Enter amount: ");  // user defined values 
    scanf("%f", &amount);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);

    
    printf("Simple Interest = %.2f\n", simpleInterest=(amount* rate * time) / 100);  // formula of simple intrest

    
}

