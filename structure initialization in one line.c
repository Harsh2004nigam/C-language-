#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int rollno;
    float cgpa;
};

int main()
{
    struct student s1 = {"Harsh",17,9.8};
    printf("Name = %s\n",s1.name);
    printf("Roll No = %d\n",s1.rollno);
    printf("CGPA = %.2f",s1.cgpa);
    return 0;
}