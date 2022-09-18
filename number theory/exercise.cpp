#include<bits/stdc++.h>
using namespace std;
int n,cnt;
vector<int>prime;
vector< pair < int,int > > primefact;
void sieve(int n)
{
    vector<bool> incomp(n+1);
    for(int i=2;i<=n;i++)
    {
        if(incomp[i])
        {
            continue;
        }
        for(int j=2*i;j<=n;j+=i){
            incomp[j]=true;
        }
        prime.push_back(i);

    }
}
void fact(int n)
{
    for(int i=0;i<prime.size();i++)
    {
        if(n%prime[i]==0)
        {
             cnt=0;
            while(n%prime[i]==0)
            {
                n=n/prime[i];
                cnt++;
            }
             primefact.push_back({prime[i],cnt});
        }

    }
    if(n>1)
    {
        primefact.push_back({n,1});
    }
}
int benxp(int primes,int c)
{
    if(c==0)
    {
        return 1;
    }
    int half=benxp(primes,c/2);
    if(c%2==0)
    {
        return half*half;
    }
    else
    {
        return half*half*primes;
    }
}
int main()
{
    cin>>n;
    int temp=n;

    sieve(n);

    for(auto el:prime)
    {
        cout<<el<<' ';
    }
    cout<<endl;
    fact(n);
     for(auto el:primefact)
    {
        cout<<el.first<<"^"<<el.second<<endl;
    }
    int divisor=1;
    for(auto el:primefact)
    {
        divisor=divisor*(el.second+1);
    }
    cout<<divisor<<endl;
    cout<<endl;
    int divsum=1;
    for(auto el:primefact)
    {
        int primes=el.first;
        int c=el.second;
        int x=((benxp(primes,c+1))-1)/(primes-1);
        divsum=divsum*x;
    }
    cout<<divsum<<endl;

}
