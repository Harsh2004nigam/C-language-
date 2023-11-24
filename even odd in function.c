#include <stdio.h>
int cheakEvenOdd(int num);
int main()
{
    int num;
    printf("enter the value of num:\n");
    scanf("%d",&num);
    int n = cheakEvenOdd(num);
    if(n == 0)
        printf("%d is even",num);
    else
        printf("%d is odd",num);
    return 0;
}

int cheakEvenOdd(int num)
{
    if(num % 2 == 0)
        return 0;
    else
        return 1;
}