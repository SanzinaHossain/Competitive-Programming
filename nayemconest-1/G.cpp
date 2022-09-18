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

    for(i=0;i<n-1;i=i+2)
        {
            swap(ar[i],ar[i+1]);
        }
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }
}
