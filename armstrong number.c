#include <stdio.h>
#include <math.h>
int main()
{
    int num,n,temp,rev,result=0,count=0;
    printf("Enter the value of Number:");
    scanf("%d",&num);
    temp=num;
    n=num;
    while(n>0)
    {
        count++;
        n/=10;
    }
    printf("total digits of number is %d\n",count);
    while(num!=0)
    {
        rev=num%10;
        result+= pow(rev,count);
        num=num/10;
    }
    if(temp==result)
    {
        printf("it is Armstrong");
    }
    else
    {
        printf("it is not Armstrong");
    }
    return 0;
}