#include <stdio.h>
int main()
{
    int amount;
    int n500,n200,n100,n50,n20,n10,n5,n2,n1;
    printf("enter the amount");
    scanf("%d",&amount);

    if(amount>=500)
    {
        n500 = amount/500;
        amount = amount - (n500 * 500);
    }

    if(amount>=200)
    {
        n200 = amount/200;
        amount = amount - (n200 * 200);
    }

    if(amount>=100)
    {
        n100 = amount/100;
        amount = amount - (n100 * 100);
    }

    if(amount>=50)
    {
        n50 = amount/50;
        amount = amount - (n50 * 50);
    }

    if(amount>=20)
    {
        n20 = amount/20;
        amount = amount - (n20 * 20);
    }

    if(amount>=10)
    {
        n10 = amount/10;
        amount = amount - (n10 * 10);
    }

    if(amount>=5)
    {
        n5 = amount/5;
        amount = amount - (n5 * 5);
    }

    if(amount>=2)
    {
        n2 = amount/2;
        amount = amount - (n2 * 2);
    }

    if(amount>=1)
    {
        n1 = amount/1;
        amount = amount - (n1 * 1);
    }
    printf("total notes is:\n");
    printf("note500=%d\n",n500);
    printf("note200=%d\n",n200);
    printf("note100=%d\n",n100);
    printf("note50=%d\n",n50);
    printf("note20=%d\n",n20);
    printf("note10=%d\n",n10);
    printf("note5=%d\n",n5);
    printf("note2=%d\n",n2);
    printf("note1=%d\n",n1);

    return 0;
}