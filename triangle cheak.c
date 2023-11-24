#include <stdio.h>
int main()
{
    int ang1,ang2,ang3;
    printf("enter the value of all three angle:\n");
    scanf("%d%d%d",&ang1,&ang2,&ang3);

    int sum = ang1 + ang2 + ang3;

    if(sum == 180 && ang1>0&&ang2>0&&ang3>0)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("tringle id invalid");
    }
    return 0;
}