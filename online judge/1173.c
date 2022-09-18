#include<stdio.h>
int main()
{
    int i,N[100],X;
    scanf("%d",&X);

    for(i=0;i<10;i++)
    {
        N[i] = X;
        printf("N[%d] = %d\n",i,N[i]);
        X=X*2;
    }
}
