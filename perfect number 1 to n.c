#include <stdio.h>
int main()
{
    int endnum,sum,temp;
    printf("Enter the value of end number:");
    scanf("%d",&endnum);
    for(int i=1; i<=endnum; i++)
    {
        sum=0;
        for(int j=1; j<i; j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            printf("%d\n",i);
    }
    return 0;
}