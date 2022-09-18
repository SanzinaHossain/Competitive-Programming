#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,mergef[10001],p,q,k=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>q;
        mergef[k]=q;
        k++;
    }
    cin>>m;
    for(j=0;j<m;j++)
    {
        cin>>p;
        mergef[k]=p;
         k++;

    }
    sort(mergef,mergef+k);
    for (int i=0; i<k; i++)
    {
        int j;
        for (j=0; j<i; j++)
        {
           if (mergef[i] == mergef[j])
              {
                  break;
              }
        }
           if (i == j)
          {
             cout<<mergef[i]<<' ';
          }
    }


}
