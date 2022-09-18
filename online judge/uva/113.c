#include<stdio.h>
#include<math.h>
int main()
{
    double n,p;
    double k;
    while((scanf("%lf%lf",&n,&p)==2))
    {
        k=pow(p,1/n);
        printf("%.lf\n",k);
    }
    return 0;
}
