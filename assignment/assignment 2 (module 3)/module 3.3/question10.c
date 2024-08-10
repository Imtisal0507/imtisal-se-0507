#include <stdio.h>

struct Employee {
    int empno;
    char empname[100];
    char address[200];
    int age;
};

void inputEmployee(struct Employee *emp) 
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
    printf("\nEmployee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);
}


main()
 {    
    int i;
    struct Employee employees[5];

    for(i = 0; i< 5; i++) 
	{
        printf("\nEnter details for Employee %d:\n", i + 1);
        inputEmployee(&employees[i]);
    }

    printf("\nEmployee Details:\n");
    for(i = 0; i < 5; i++) 
	{
        printEmployee(employees[i]);
    }

}

