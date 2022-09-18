#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int t,n,m,ar[100],p,e,x,s,r,l,d;
    while(scanf("%d",&t)==1);
    {

         for(int i=1;i<=t;i++)
      {
          scanf("%d%d",&n,&m);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[j]);
        }
        for(int k=0;k<2*m;k++)
        {
            scanf("%c",&ch);
            if(ch=='S'||'M')
            {

                if(ch=='S')
                {
                    scanf("%d",&p);
                    for(int b=0;b<n;b++)
                    {
                        ar[b]=ar[b]+p;
                    }
                }
                 if(ch=='M')
                {
                    scanf("%d",&d);
                    for(int f=0;f<n;f++)
                    {
                        ar[f]=ar[f]*d;
                    }
                }

            }
             if(ch=='P')
            {
                scanf("%d%d",&s,&r);
                int temp;
                temp=ar[s];
                ar[s]=ar[r];
                ar[r]=temp;
            }
             if(ch=='D')
            {
                scanf("%d",&l);
                if(l>0)
                {
                    for(int g=0;g<n;g++)
                    {
                        ar[g]=ar[g]/l;
                    }
                }
            }
            else if(ch=='R')
            {
                e=x-1;
                x=0;
                while(x<e)
                {
                    int spt;
                    spt=ar[x];
                    ar[x]=ar[e];
                    ar[e]=spt;
                    x++;
                    e--;
                }
            }
        }
            printf("Case %d:\n",i);
            for(int v=0;v<n;v++)
            {
                printf("%d ",ar[v]);
            }
            printf("\n");


    }
}
return 0;
}
