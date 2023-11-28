#include <stdio.h>
int main()
{
    int a[3][3],i,j,min;
    printf("Enter the 9 value :\n");
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++ )
        {
            printf("Enter the value of A%d%d : ",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    min=a[0][0];
    printf("\nYou have entered :\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++ )
        {
            printf("%d ",a[i][j]);
            
            if(min>a[i][j])
            {
                min = a[i][j];
            }
        }
        printf("\n");
    }
    printf("\n\nminimum element in martix is : %d",min);    
        
    return 0;
}