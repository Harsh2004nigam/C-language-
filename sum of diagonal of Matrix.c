#include <stdio.h>
#define SIZE 3

int main()
{
    int a[SIZE][SIZE],i,j,sum=0;
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("Enter %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    }

    printf("\n\n******************************\n\n\n");

    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("%d ",a[i][j]);
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
        printf("\n");
    }
    printf("\n\nsum of diagoal is %d",sum);
    return 0;
}