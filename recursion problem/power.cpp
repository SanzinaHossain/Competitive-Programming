#include<bits/stdc++.h>
using namespace std;
long long power(long long n,long long k)
{
    if(k==0)
    {
        return 1;
    }
    long long x=power(n,k/2);
    if(k%2==1)
    {
        return n*x*x;
    }
    return x*x;
}
int main()
{
    long long a,b,s;
    cin>>a>>b;
    s=power(a,b);
    if(s>1e18)
    {
        return 0;
    }
    else
    {
        cout<<s;
    }
}

