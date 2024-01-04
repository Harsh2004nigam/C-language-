#include <stdio.h>

typedef struct vector{
    int x;
    int y;
}vec;

void sum(vec v1, vec v2, vec add);
int main()
{
    vec v1 = {10,5};
    vec v2 = {6,8};
    vec add = {0};
    sum(v1,v2,add);
    return 0;
}

void sum(vec v1, vec v2, vec add)
{
    add.x = v1.x + v2.x;
    add.y = v1.y + v2.y;
    
    printf("Value of X : %d & Y : %d",add.x,add.y);
}