#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,ar[100],a,j,k;
    while(scanf("%d",&n)==1)
    {
         if(n==0)

          break;

        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }

        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(ar[j]>ar[k])
                {
                    a=ar[j];
                    ar[j]=ar[k];
                    ar[k]=a;
                }
            }
        }
        for(i=0;i<n;i++)
         {
             printf("%d ",ar[i]);

         }
         printf("\n");
    }

}
