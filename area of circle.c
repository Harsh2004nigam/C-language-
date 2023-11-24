#include<stdio.h>
int main()
{
    float radius,pi=3.14;
    printf("Enter the value of radius:");
    scanf("%f",&radius);

    float area;
    area = pi*radius*radius;
    printf("Area of cricle is %f",area);
    return 0;
}