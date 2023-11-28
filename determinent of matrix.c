#include <stdio.h>
#define size 3

int main()
{
    int arr[size][size],i,j;
    int a,b,c,d,e,f,g,h,I;
    long det;

    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("Enter %d%d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n************************************\n\n");

    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    a = arr[0][0];
    b = arr[0][1];
    c = arr[0][2];
    d = arr[1][0];
    e = arr[1][1];
    f = arr[1][2];
    g = arr[2][0];
    h = arr[2][1];
    I = arr[2][2];

    // a(ei - hf) -b(di - fg) +c(dh - cg)

    det = a*((e*I)-(h*f)) -b*((d*I)-(f*g)) +c*((d*h)-(e*g));
    printf("\n\ndeterminent = %ld",det);
    return 0;
}