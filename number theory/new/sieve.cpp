#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>prime;
void sieve(ll n)
{
    vector<bool>iscomp(n+1);
    for(int i=2;i<=n;i++)
    {
        if(iscomp[i]) continue;
        for(int j=2*i;j<=n;j+=i)
        {
            iscomp[j]=true;
        }
        prime.push_back(i);
    }
}
int main()
{
    sieve(1000);
    for(auto el:prime)
    {
        cout<<el<<endl;
    }
}
