//Write a program of structure employee that provides the following 
//information -print and display empno, empname, address and age
#include <stdio.h>

struct Employee 
{
    int empno;
    char empname[100];
    char address[200];
    int age;
};

inputEmployee(struct Employee *emp) 
{
    printf("Enter Employee Number: ");
    scanf("%d", &emp->empno);

    printf("Enter Employee Name: ");
        getchar();  
	    gets(emp->empname); 

    printf("Enter Employee Address: ");
    gets(emp->address); 

    printf("Enter Employee Age: ");
    scanf("%d", &emp->age);
}

printEmployee(struct Employee emp) 
{
    printf("\nEmployee Details:\n");          //Employye details
    printf("Employee Number: %d\n", emp.empno);  //Employye numbers
    printf("Employee Name: %s\n", emp.empname);   //employye name
    printf("Employee Address: %s\n", emp.address);   //employee address
    printf("Employee Age: %d\n", emp.age);     //employye age
}

int main() {
    struct Employee emp;

    inputEmployee(&emp);

    printEmployee(emp);

}

