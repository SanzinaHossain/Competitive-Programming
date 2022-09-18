#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ar[1001],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<long long>());
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }


}
