#include <stdio.h>

void work(int a,int b,int *sum,int *mul,int *avg);

int main()
{
    int a = 5, b = 15, sum,mul,avg;
    work(a,b,&sum,&mul,&avg);
    printf("a = %d b = %d sum = %d mul = %d avg = %d",a,b,sum,mul,avg);
    return 0;
}

void work(int a,int b,int *sum,int *mul,int *avg)
{
    *sum = a + b;
    *mul = a * b;
    *avg = (a+b)/2;
}