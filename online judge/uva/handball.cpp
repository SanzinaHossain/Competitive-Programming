#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,i,k,m;
    while(scanf("%d%d",&a,&b)==2)
    {
        k=0;
        while(a--)
        {
            m=0;
            for(i=1;i<=b;i++)
            {
                scanf("%d",&n);
               if(n>0)
                m++;
            }
        if(m==b)
        {
            k++;
        }
    }
    printf("%d\n",k);

}
}
