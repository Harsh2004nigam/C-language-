#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter the value of first matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the value of %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter the value of second matrix\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the value of %d%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\n\n*********************************\n\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(c[i][j]>=0)
            {
                printf(" %d ",c[i][j]);
            }
            else
            {
                printf("%d ",c[i][j]);
            }    
        }
        printf("\n");
    }
    return 0;
}