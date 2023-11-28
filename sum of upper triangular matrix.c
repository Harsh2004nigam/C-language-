#include <stdio.h>
#define size 3

int main()
{
    int a[size][size],i,j,cheak=1,sum=0;
    printf("enter the element \n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("Enter %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            if(j<i && a[i][j]!=0)
            {
                cheak = 0;
            }
            else
            {
                sum += a[i][j];
            }

        }
    }
    printf("\n*******************************\n\n");
    if(cheak == 1)
    {
        for(i=0; i<size; i++)
        {
            for(j=0; j<size; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("Sum of Upper triangular matrix : %d",sum);
    }
    else
    {
        printf("This is not Upper triangular matrix:");
    }
    return 0;
}