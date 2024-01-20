#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));
    ptr[0] = 12;
    ptr[1] = 14;
    ptr[2] = 16;
    ptr[3] = 18;
    ptr[4] = 10;
    for(int i=0; i<5; i++)
    {
        printf("%d\n",ptr[i]);
    }
    printf("\n\n******** Address of this pointer is ********\n\n\n");
    
    for(int i=0; i<5; i++)
    {
        printf("%d\n",&ptr[i]);
    }
    return 0;
}