#include<stdio.h>
int main()
{
    int n,i,count=0,x;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<5;i++)

         {
            scanf("%d",&x);
            if (n==x)
           {
               count++;
           }
        }
        printf("%d\n",count);
    }
}
