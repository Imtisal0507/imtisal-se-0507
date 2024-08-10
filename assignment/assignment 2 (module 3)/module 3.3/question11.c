#include <stdio.h>
#include <string.h>

// Define a structure
struct EmployeeStruct {
    int empno;
    char empname[50];
    float salary;
};

// Define a union
union EmployeeUnion {
    int empno;
    char empname[50];
    float salary;
};

main() 
{
    struct EmployeeStruct empStruct;
    union EmployeeUnion empUnion;

    empStruct.empno = 101;
    strcpy(empStruct.empname, "John Doe");
    empStruct.salary = 50000.50;

    empUnion.empno = 101;
    strcpy(empUnion.empname, "John Doe");
    empUnion.salary = 50000.50;

    printf("Structure:\n");
    printf("Employee Number: %d\n", empStruct.empno);
    printf("Employee Name: %s\n", empStruct.empname);
    printf("Employee Salary: %.2f\n", empStruct.salary);

    printf("\nUnion (after setting all members):\n");
    printf("Employee Number: %d\n", empUnion.empno);
    printf("Employee Name: %s\n", empUnion.empname);
    printf("Employee Salary: %.2f\n", empUnion.salary);

    empUnion.empno = 202;
    printf("\nUnion (after setting empno):\n");
    printf("Employee Number: %d\n", empUnion.empno);
    printf("Employee Name (may be corrupted): %s\n", empUnion.empname); 
    printf("Employee Salary (may be corrupted): %.2f\n", empUnion.salary); 

    printf("\nSize of structure: %lu bytes\n", sizeof(empStruct));
    printf("Size of union: %lu bytes\n", sizeof(empUnion));

}

