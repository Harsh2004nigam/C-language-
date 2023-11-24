#include <stdio.h>
int main()
{
    int n;
    long long int fac=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        fac*=i;
    }
    printf("Factorial = %lld",fac);
    return 0;
}