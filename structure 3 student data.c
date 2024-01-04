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
    
    struct student s2;
    s2.rollno = 18;
    s2.cgpa = 8.2;
    strcpy(s2.name,"Jay");
    
    struct student s3;
    s3.rollno = 19;
    s3.cgpa = 8.9;
    strcpy(s3.name,"Kajal");

    printf("Name = %s\n",s1.name);
    printf("Roll No = %d\n",s1.rollno);
    printf("CGPA = %.2f\n",s1.cgpa);
    
    printf("\n**************************************\n\n");
    
    printf("Name = %s\n",s2.name);
    printf("Roll No = %d\n",s2.rollno);
    printf("CGPA = %.2f\n",s2.cgpa);

        printf("\n**************************************\n\n");
 
    printf("Name = %s\n",s3.name);
    printf("Roll No = %d\n",s3.rollno);
    printf("CGPA = %.2f\n",s3.cgpa);
 
    return 0;
}