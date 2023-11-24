#include <stdio.h>
int main()
{
    int num,sum=0,temp;
    printf("Enter the value of number:");
    scanf("%d",&num);
    temp=num;
    for(int i=1; i<=(num/2); i++)
    {
        if(num%i==0)
        {
            //   printf("%d is a factor\n",i);
            sum+=i;
        }
    }
    if(temp==sum)
    {
        printf("%d is a perfect number",temp);
    }
    else
    {
        printf("%d is not perfect number",temp);
    }
    return 0;
}