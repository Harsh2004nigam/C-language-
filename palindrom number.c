#include <stdio.h>
int main()
{
    int n,a,rev=0,tem;
    printf("Enter the value of n:");
    scanf("%d",&n);
    tem=n;
    while(n!=0)
    {
        a=n%10;
        rev=rev*10+a;
        n/=10;
    }
    printf("\nreverse of digit = %d\n",rev);

    if(tem==rev)
    {
        printf("\nit is  PALINDROME");
    }
    else
    {
        printf("\nit is not Palindrome!!!!");
    }
    return 0;
}