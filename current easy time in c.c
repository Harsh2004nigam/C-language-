#include <stdio.h>
#include <time.h>

int main()
{
    printf("current time = %s\n",__TIME__);
    printf("current date = %s\n",__DATE__);
    printf("current file = %s\n",__FILE__);    
    printf("current line = %d\n",__LINE__);
}