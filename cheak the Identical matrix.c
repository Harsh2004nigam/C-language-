#include <stdio.h>
#define size 3

int main()
{
    int a[size][size],i,j, Identical=1;
    for(i=0; i<size; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0; i<size; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j && a[i][j] != 1)
            {
                Identical = 0;
            }
            else if(i!=j && a[i][j] != 0)
            {
                Identical = 0;
            }
        }
    }
    if(Identical == 1)
    {
        printf("\n\nThis is the Identical matrix\n\n");
        for(i=0; i<size; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
         printf("\n\nThis is NOT Identical matrix\n\n");   
    }
    return 0;
}