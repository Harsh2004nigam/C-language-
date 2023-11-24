#include <stdio.h>
int main()
{
    int n,a,mul=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        mul=mul*a;
    }

    printf("product of digit = %d",mul);
    return 0;
}