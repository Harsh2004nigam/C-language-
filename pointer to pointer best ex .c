#include <stdio.h>
int main()
{
    int num = 20;
    int *a = &num;
    int **b = &a;
    int ***c = &b;
    int ****d = &c;
    int *****e = &d;
    int ******f = &e;
    int *******g = &f;
    int ********h = &g;
    int *********i = &h;
    int **********j = &i;
    int ***********k = &j;
    int ************l = &k;
    int *************m = &l;
    int **************n = &m;
    int ***************o = &n;
    int ****************p = &o;
    int *****************q = &p;

    printf("%d\n",num);
    printf("%u\n",a);
    printf("%u\n",b);
    printf("%u\n",c);
    printf("%u\n",d);
    printf("%u\n",e);
    printf("%u\n",f);
    printf("%u\n",g);
    printf("%u\n",h);
    printf("%u\n",i);
    printf("%u\n",j);
    printf("%u\n",k);
    printf("%u\n",l);
    printf("%u\n",m);
    printf("%u\n",n);
    printf("%u\n",o);
    printf("%u\n",p);
    printf("%u\n",q);
    return 0;
}