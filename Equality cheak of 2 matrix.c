#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j,isequal=1;
    printf("Enter the first matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter the second matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter %d%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            while(a[i][j] != b[i][j])
            {
                isequal = 0;
                break;
            }
        }
    }
    printf("\n\n*******************************\n\n\n");
    if(isequal == 1)
    {
        printf("Both Matrix are equal!!!!");
    }
    else
    {
        printf("Matrix is not equal ");
    }
    return 0;
}