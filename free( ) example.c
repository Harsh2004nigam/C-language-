#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    ptr  = (int*)malloc(n*sizeof(int));
    
    for(int i=0; i<n; i++)
    {
        printf("%d = %d\n",i+1,ptr[i]);
    }
    free(ptr);
    
    ptr  = (int*)calloc(2,sizeof(int));
    
    for(int i=0; i<2; i++)
    {
        printf("%d = %d\n",i+1,ptr[i]);
    }
    return 0;
}