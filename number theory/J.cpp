#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100000007
ll n,cnt;
bool iscomp[MAX];
vector<ll>prime;

void sieve()
{
   for(long long int i=2;i*i<=MAX;i++)
    {
        if(!iscomp[i])
      {

        for(long long int j=i*i;j<=MAX;j+=i)
        {
            iscomp[j]=true;
        }
      }
    }
        for(long long int i=2;i<=MAX;i++)
        {
            if(!iscomp[i])
            {
                prime.push_back(i);
            }
        }
}
/*int benxp(ll primes,ll c)
{
    if(c==0)
    {
        return 1;
    }
    ll half=benxp(primes,c/2);
    if(c%2==0)
    {
        return half*half;
    }
    else
    {
        return half*half*primes;
    }
}*/
void fact(ll n)
{
    ll temp=n;
   ll ans=1;
    for(ll i=0;i<prime.size() && prime[i]*prime[i]<n;i++)
    {
        ll m=1;
        if(n%prime[i]==0)
        {
             ll cnt=1;
            while(n%prime[i]==0)
            {
                n=n/prime[i];
                m=m*prime[i];
                cnt=cnt+m;
            }
            ans=ans*cnt;
        }

    }
    if(n!=1)
    {
        ans=ans*(n+1);
    }
    cout<<ans-temp<<endl;

}

int main()
{
    sieve();
    ll t;
    cin>>t;
    while(t--)
   {

    cin>>n;
    fact(n);
   }

}


