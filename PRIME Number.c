#include<stdio.h>

int main()
{
    int num,flag=0;
    printf("Enter the value of number;");
    scanf("%d",&num);

    for(int i=2; i<=(num/2); i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("not prime");
    }
    else
    {
        printf("PRIME");

    }
    return 0;
}