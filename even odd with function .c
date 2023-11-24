#include <stdio.h>
int even(int num);

int main()
{
    int num;
    printf("Enter the value of number : ");
    scanf("%d",&num);
    even(num);
    return 0;
}

int even(int num)
{
    if(num % 2 == 0)
        printf("%d is even\n",num);

    else
        printf("%d is odd",num);
}