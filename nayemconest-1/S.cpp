#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,count=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        if(k%i==0 && k/i<=n)
        {
            count++;
        }
    }
    cout<<count;
}
