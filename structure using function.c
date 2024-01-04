#include <stdio.h>

struct employee
{
char name[20];
int id;
float salary;
};

void printInfo(struct employee e1);

int main()
{
    struct employee e1 = {"Harsh",10017,150095.00};
    printInfo(e1);
        
    return 0;
}

void printInfo(struct employee e1)
{
    printf("Employee Name = %s\n",e1.name);
    printf("Employee ID = %d\n",e1.id);
    printf("Employee Salary = %.2f",e1.salary);
}