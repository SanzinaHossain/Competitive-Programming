#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[100],i,res;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar, ar+n);
    for(i=0;i<n;i++)
    {


        cout<<ar[i]<<" ";
    }
}

