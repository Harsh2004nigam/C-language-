#include <stdio.h>
int main()
{
    int arr[5];
    int *ptr = &arr[0];

    for(int i=0; i<5; i++)
    {
        printf("%d index : ",i+1);
        scanf("%d",ptr+i);
    }

    printf("\n\n**************************************\n\n\n");
    for(int i=0; i<5; i++)
    {
        printf("%d index : %d\n",i+1,*(ptr+i));
    }

    return 0;
}