#include <stdio.h>

int main()
{
    int a[3][3],i,j;
    printf("Enter the 9 values :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the value of A%d%d : ",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("\ndiagonal element are\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==(2-j))
            {
                printf("%d ",a[i][j]);
            }
            else
            {
                printf("%d ",0);
            }
        }
        printf("\n");
    }


    return 0;
}