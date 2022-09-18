#include<stdio.h>
int main()
{
    int i,j,k,n,x,ar[100],t,m,q,p,w,b,l,h,f,g,r;
    char  ch;
    while(scanf("%d",&t)==1)
    {
        for(i=0;i<t;i++)
        {
            scanf("%d%d",&n,&x);
            for(j=0;j<n;j++)
            {
                scanf("%d",&ar[j]);
            }
            for(k=0;k<x;k++)
            {
                scanf("%c",&ch);
                if(ch=='P')
                {
                    scanf("%d%d",&m,&q);
                    int temp;
                    temp=ar[m];
                    ar[m]=ar[n];
                    ar[n]=temp;
                }
                else if(ch=='S'||'M')
                {
                    scanf("%d",&p);
                    if(ch=='S')
                    {
                        for(f=0;f<n;f++)
                        {
                            ar[f]=ar[f]+p;
                        }
                    }
                    else if (ch=='M')
                    {
                        for(b=0;b<n;b++)
                        {
                            ar[b]=ar[b]*p;
                        }
                    }
                }
                    else if (ch=='D')
                    {
                        scanf("%d",&h);
                        for(l=0;l<n;l++)
                        {
                            ar[l]=ar[l]/h;
                        }
                    }

                else if(ch=='R')
                {
                    for(g=0;g<n;g++)
                    {
                        for(r=0;r<n-1;r--)
                        {
                            ar[g]=ar[r];
                        }
                    }
                }
            }

        for(w=0;w<n;w++)
        {
            printf("Case [%d]:/n %d\n",w,ar[w]);
        }
        }
    }

}
