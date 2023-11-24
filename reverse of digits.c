#include <stdio.h>
int main()
{
    int n,a,rev=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    while(n!=0)
    {
        a=n%10;
        rev=rev*10+a;
        n/=10;
    }
    printf("reverse of digit = %d",rev);
    return 0;
}