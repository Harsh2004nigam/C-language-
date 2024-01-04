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
    struct student s1;
    s1.rollno = 17;
    s1.cgpa = 9.4;
    strcpy(s1.name,"Harsh");

    printf("Name = %s\n",s1.name);
    printf("Roll No = %d\n",s1.rollno);
    printf("CGPA = %.2f\n",s1.cgpa);
    return 0;
}