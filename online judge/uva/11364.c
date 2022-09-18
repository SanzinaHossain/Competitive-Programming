#include<stdio.h>
int main()
{
    int t,p,i,n,Max,Min,c;
    while(scanf("%d",&t)!=EOF)
    {
        for(c=1; c<=t; c++)
        {
            scanf("%d",&p);
            Max = 0;
            Min = 99;
            for(i=1; i<=p; i++)
            {
                scanf("%d",&n);
                if(Max <= n)
                    Max = n;
                if(Min >= n)
                    Min = n;
            }
            n = (Max-Min)*2;
            printf("%d\n",n);
        }

    }
    return 0;
}

