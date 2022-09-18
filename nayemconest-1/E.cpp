#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[101],k,i,count=0,j;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                int s=ar[i]+ar[j];
                if(s%k==0)
                {
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}
