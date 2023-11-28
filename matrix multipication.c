#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("Enter the value of First Matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter the value of Second Matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter %d%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\n******************************************\n\n\n");
    printf("multipication of matrix are...\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j] = 0;
            for(k=0; k<3; k++)
            {
                c[i][j] += (a[i][k]*b[k][j]);
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}