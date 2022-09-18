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
    for(i=1;i<n;i++)
    {
        if(ar[i]>ar[i-1])
        {
            cout<<ar[i]<<' ';
        }
    }
    return 0;
}
