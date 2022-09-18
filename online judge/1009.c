#include<stdio.h>
int main()
{
    char name[80];
    double s,sl,t;
    scanf("%s",&name);
    scanf("%lf%lf",&s,&sl);
    t=s+(sl*15)/100;
    printf("TOTAL = R$ %.2lf\n",t);
    return 0;

}
