#include <stdio.h>

typedef struct ArtificialIntelligenceAndMachineLearning
{
    char name[50];
    int roll;
    float cgpa;
}aiml; 

int main()
{
    aiml s1;
    strcpy(s1.name,"Harsh");
    s1.roll = 10017;
    s1.cgpa = 9.4;
    
    printf("Student Name = %s\n",s1.name);
    printf("Student Roll No = %d\n",s1.roll);
    printf("Student CGPA = %.2f\n",s1.cgpa);
    return 0;
}