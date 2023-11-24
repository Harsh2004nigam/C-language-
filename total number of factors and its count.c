#include <stdio.h>
int main()
{
    int n,count=0;
    printf("enter the value of n:");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("Factors of %d = %d\n",n,i);
            count++;
        }
    }
    printf("\ntotal Factors = %d\n",count);
    if(count == 2)
    {
        printf("PRIME NUMBER\n");
    }
    else
    {
        printf("it is not prime\n");
    }
    return 0;
}