#include <stdio.h>
#include <math.h>

int main()
{
    int num,power;
    printf("Enter the number:");
    scanf("%d",&num);

    printf("Enter the power:");
    scanf("%d",&power);

    long int result = pow(num,power);
    printf("result=%ld",result);
    return 0;
}

