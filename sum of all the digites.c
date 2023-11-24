#include <stdio.h>
int main()
{
    int n,a,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        sum=sum+a;
    }

    printf("sum of digit = %d",sum);
    return 0;
}