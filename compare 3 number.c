#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is greter!! ");
        }
        else
        {
            printf("c is greter!! ");
        }
    }
    else
    {
       if(b>c)
        {
            printf("b is greter!! ");
        }
        else
        {
            printf("c is greter!! ");
        }
 
    }
    
    return 0;
}