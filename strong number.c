#include <stdio.h>
int main()
{
    int num,lastdigit,originalnum,sum=0;
    long fac;
    printf("Enter the number:");
    scanf("%d",&num);
    originalnum = num;
    while(num>0)
    {
        lastdigit = num%10;
        fac=1;
        for(int i=1; i<=lastdigit; i++)
        {
            fac*=i;
        }
        sum+=fac;
        num/=10;
    }
    if(originalnum == sum)
    {
        printf("%d is STRONG NUMBER",originalnum);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER",originalnum);
    }
    return 0;
}