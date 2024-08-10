#include<stdio.h>
circle()
{
	float radius, area;
    
    printf("Enter Radius of Circle: ");
    scanf("%f", &radius);
    
    
    printf("Area of Circle = %.2f cm²\n", area = 3.14 * radius * radius);
}
rect()    // rectangle
{
	float length, width, area;
    printf("Enter length of Rectangle: ");
    scanf("%f", &length);
    printf("Enter width of Rectangle: ");
    scanf("%f",&width);
    
    
    printf("Area of Rectangle = %.3f cm²\n", area = length * width);
}
tri()   //triangle    
{
	float base, hieght, area;
	printf("Enter lenght of base : ");
	scanf("%f",&base);
	printf("Enter lenght of hieght : ");
	scanf("%f",&base);
	
	printf("Area of triangle = %.4f ", area = 0.5 * base * hieght);
}


main()
{
	circle();
	rect();
	tri();
}
