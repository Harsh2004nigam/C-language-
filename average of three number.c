// write a pogram to rint a number of thee average
#include <stdio.h>
int main()
{
    int n,m,o;
    printf("enter the three number:\n");
    scanf("%d%d%d",&n,&m,&o);

    float a=(n+m+o)/3.0;
    printf("the average if number is :%.3f",a);
    return 0;
}
