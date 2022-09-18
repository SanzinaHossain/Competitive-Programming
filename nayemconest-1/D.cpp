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
    sort(ar,ar+n);
    cout<<ar[0]+ar[n-1];
}
