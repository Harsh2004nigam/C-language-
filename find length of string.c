#include <stdio.h>
int strLenght(char arr[]);
int main()
{
    char arr[100];
    fgets(arr,100,stdin);
    printf("Length = %d",strLenght(arr));
    return 0;
}

int strLenght(char arr[])
{
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++ )
    {
        count++;
    }
    return count-1;
}