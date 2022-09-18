#include<stdio.h>
int main()
{
    int a,b,i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
         int sum=0;
         if(a%2==0)
            a=a+1;
        if(b%2==0)
            b=b-1;
       for(j=a;j<=b;j+=2)
         sum=sum+j;
         printf("Case %d: %d\n",i,sum);
    }
}
