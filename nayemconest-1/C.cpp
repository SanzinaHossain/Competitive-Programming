#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[101],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }

        for(i=0;i<n-1;i++)
        {
            if(ar[i]>0 && ar[i+1]>0)
            {
               cout<<ar[i]<<' '<<ar[i+1]<<endl;
            }
          else  if(ar[i]<0 && ar[i+1]<0)
            {
                cout<<ar[i]<<' '<<ar[i+1]<<endl;
            }
        }

}
