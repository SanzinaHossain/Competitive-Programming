#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[101],i,min,l=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    min=ar[0];
    for(i=1;i<n;i++)
    {
        if(min>ar[i])
        {
            min=ar[i];
            l=i;
        }
    }
    swap(ar[0],ar[l]);
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }

}
