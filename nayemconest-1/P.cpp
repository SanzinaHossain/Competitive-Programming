#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ar[100001],i,multi;
    cin>>n;
    cin>>ar[0];
    multi=ar[0];
    for(i=1;i<n;i++)
    {
        cin>>ar[i];
        multi=multi*ar[i];
    }

    if(multi<=1000000000000000000)
    {
        cout<<multi;
    }
    else
    {
        cout<<-1;
    }
}
