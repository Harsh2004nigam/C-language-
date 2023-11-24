// write a program to calculate a cube of number with function
#include <stdio.h>
double cube(double num);

int main()
{
    int num;
    double c;

    printf("enter the value of num:");
    scanf("%d",&num);

    c = cube(num);
    printf("the cube of %d is %.0f",num,c);
    return 0;
}

double cube(double num)
{
    return (num * num *num);
}