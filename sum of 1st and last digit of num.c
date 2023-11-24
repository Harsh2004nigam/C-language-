#include <stdio.h>
int main()
{
    int n,firstdigit,lastdigit;

    printf("Enter the number:");
    scanf("%d",&n);

    lastdigit=n%10;
    firstdigit = n;
    while(firstdigit>=10)
    {
        firstdigit/=10;
    }
    printf("first digit = %d\n", firstdigit);
    printf("last digit = %d\n", lastdigit);

    int sum = firstdigit + lastdigit;
    printf("sum of first and last digit = %d",sum);

    return 0;
}