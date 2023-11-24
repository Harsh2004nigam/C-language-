#include <stdio.h>
int main()
{
    int num1,num2,max,lcm;
    printf("enter both the number:\n");
    scanf("%d%d",&num1,&num2);

    max = (num1>num2) ? num1 :num2;
    int i = max;

    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }
        i+=max;
    }
    printf("LCM OF %d and %d = %d",num1,num2,lcm);
    return 0;
}