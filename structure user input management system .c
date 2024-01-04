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
    struct student s1[4];
    printf("Entr the data\n");
    for(int i=0; i<4; i++)
    {
        printf("%d. name : ",i+1);
        scanf("%s",&s1[i].name);
        printf("%d. Roll No : ",i+1);
        scanf("%d",&s1[i].rollno);
        printf("%d. CGPA : ",i+1);
        scanf("%f",&s1[i].cgpa);
        printf("\n");
    }
    
    for(int i=0; i<4; i++)
    {
        printf("Name  = %s\n",s1[i].name);
        printf("Roll No = %d\n",s1[i].rollno);
        printf("CGPA = %.2f\n",s1[i].cgpa);
        printf("\n**************************\n");
    }     
    return 0;
}