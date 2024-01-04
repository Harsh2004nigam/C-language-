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
    struct student *ptr = &s1;
    //printf("Name = %s\n",s1.name);
    printf("Roll No = %d\n",s1.rollno);
    //printf("CGPA = %.2f",s1.cgpa);
    printf("Roll no is %d\n",(*ptr).rollno);
    printf("R.no = %d",ptr->rollno);
    return 0;
}