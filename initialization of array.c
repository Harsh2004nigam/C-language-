#include <stdio.h>
int main()
{
    int marks[] = {100,23,45};
    for(int i=0; i<3; i++)
    {
        printf("marks%d = %d\n",i+1,marks[i]);
    }
    return 0;
}