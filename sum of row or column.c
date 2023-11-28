#include <stdio.h>
#define size 3

int main()
{
    int a[size][size],i,j,sum=0;
    printf("enter the element \n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("Enter %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\n\n");
    
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n**************************\n\n\n");
    for(i=0; i<size; i++)
    {
        sum = 0;
        for(j=0; j<size; j++)
        {
            sum+=a[i][j];
        }
        printf("Sum of Row %d = %d\n",i+1,sum);
    }
    
    printf("\n\n");
    
    for(i=0; i<size; i++)
    {
        sum = 0;
        for(j=0; j<size; j++)
        {
            sum+=a[j][i];
        }
        printf("Sum of Column %d = %d\n",i+1,sum);
    }
    return 0;
}