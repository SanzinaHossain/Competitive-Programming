#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ar[101],x[101];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    for(i=1;i<=n;i++)
    {
        x[ar[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        cout<<x[i]<<' ';
    }
}
