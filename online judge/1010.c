#include<stdio.h>
int main()
{
    int a,b,x,y;
    double k,m,t;
    scanf("%d%d%lf",&a,&b,&k);
    scanf("%d%d%lf",&x,&y,&m);
    t=b*k+y*m;
    printf("VALOR A PAGAR: R$ %.2lf\n",t);
    return 0;
}
