#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void sieve(ll n)
{
    vector<bool>iscomp(n+1);
    vector<ll>prime(n+1);
    for(ll i=2;i*i<=n;i++)
    {
        if(!iscomp[i])
        {
            for(ll j=i*2;j<=n;j+=i)
            {
                iscomp[j]=true;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3;i<=n;i+=2)
    {
        if(iscomp[i]==false)
        {
            prime.push_back(i);
        }
    }
    for(ll i=0;i<=100000000;i=i+101)
    {
        cout<<prime[i]<<endl;
    }

}
int main()
{
    sieve(100000001);
}
