#include <stdio.h>
#define size 3

int main()
{
    int a[size][size],i,j,cheak=1;
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
            if(j>i && a[i][j]!=0)
            {
                cheak = 0;
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
    }
    else
    {
        printf("This is not Lower triangular matrix:");
    }
    return 0;
}