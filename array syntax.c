#include <stdio.h>
int main()
{
    int marks[3];

    printf("Enter the value of phy:\n");
    scanf("%d",&marks[0]);

    printf("Enter the value of chem:\n");
    scanf("%d",&marks[1]);

    printf("Enter the value of mat:\n");
    scanf("%d",&marks[2]);

    printf("physics = %d, chemistry = %d, maths = %d",marks[0],marks[1],marks[2]);
    return 0;
}