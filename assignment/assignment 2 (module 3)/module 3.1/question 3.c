//write a program to find area of circle, rectangle and triangle
#include<stdio.h>
circle()
{
	float radius, area;      
    
    printf("Enter Radius of Circle: ");    // user defined value 
    scanf("%f", &radius);
    
    
    printf("Area of Circle = %.2f cm˛\n", area = 3.14 * radius * radius);       //formula of circle
}
rect()    // rectangle
{
	float length, width, area;
    printf("Enter length of Rectangle: ");    // user defined values
    scanf("%f", &length);
    printf("Enter width of Rectangle: ");
    scanf("%f",&width);
    
    
    printf("Area of Rectangle = %.3f cm˛\n", area = length * width);     //   formula of rectangle
}
tri()   //triangle    
{
	float base, hieght, area;
	printf("Enter lenght of base : ");    // user defined values 
	scanf("%f",&base);
	printf("Enter lenght of hieght : ");
	scanf("%f",&base);
	
	printf("Area of triangle = %.4f ", area = 0.5 * base * hieght);    //  formula of a triangle
}


main()
{
	circle();
	rect();
	tri();
}
