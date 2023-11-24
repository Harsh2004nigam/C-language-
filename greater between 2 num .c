#include <stdio.h>
int main()
{
    int num1,num2;
    printf("enter both the value:\n ");
    scanf("%d%d",&num1,&num2);
    
    if(num1>num2)
    {
        printf("num1 is greter!!");
    }
    else
    {
        printf("num2 is greter!!");
    }
    return 0;
}