#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ar[100001],i=0,j;
    while(cin>>n)
    {
        ar[i]=n;
        i++;
    }
    sort(ar,ar+i);
    for(j=0;j<i;j++)
    {
        cout<<ar[j]<<' ';
    }
}
