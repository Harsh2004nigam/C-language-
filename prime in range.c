#include <stdio.h>
int main()
{
    int start, end, count;
    printf("Enter the start and end :\n");
    scanf("%d%d",&start,&end);
    for(int i=start; i<=end; i++)
    {
        count=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                count = count + 1;
            }
        }


        if(count==2)
        {
            printf("prime number = %d\n",i);
        }
    }

    return 0;
}