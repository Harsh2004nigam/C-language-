#include <stdio.h>

struct complex{
    int real;
    int img;
};

int main()
{
    struct complex num = {5,10};
    struct complex *ptr = &num;
    
    printf("%d+%di",ptr->real, ptr->img);
    return 0;
}