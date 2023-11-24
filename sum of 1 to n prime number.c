#include <stdio.h>
int main()
{
    int end,flag=0,sum=0,i;
    printf("Enter the vslue of end:");
    scanf("%d",&end);

    for(int i=2; i<=end; i++)
    {
        flag=1;
        for(int j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag=0;
            }
        }

        if(flag==1)
        {
            printf("%d\n",i);
            sum+=i;
        }
        
        
    }
    printf("sum is %d",sum);
    return 0;
}