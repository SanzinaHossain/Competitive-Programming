#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
vector<long long int>prime;

void  sieve()
{
    bool incomp[MAX];
    for(long long int i=2;i*i<=MAX;i++)
    {
        if(!incomp[i])
      {

        for(long long int j=i*i;j<=MAX;j+=i)
        {
            incomp[j]=true;
        }
      }
    }
        for(long long int i=2;i<=MAX;i++)
        {
            if(!incomp[i])
            {
                prime.push_back(i);
            }
        }

}
long long int benxp(long long int primes,long long int c)
{
    if(c==0)
    {
        return 1;
    }
    long long int half=benxp(primes,c/2);
    if(c%2==0)
    {
        return half*half;
    }
    else
    {
        return half*half*primes;
    }

}

void fact(long long int s)
{
    vector< pair < long long int,long long int > > primefact;
    for(long long int i=0;i<prime.size() && prime[i]*prime[i]<s;i++)
    {
        if(s%prime[i]==0)
        {
             long long int cnt=0;
            while(s%prime[i]==0)
            {
                s=s/prime[i];
                cnt++;
            }
             primefact.push_back({prime[i],cnt});
        }

    }
    if(s>1)
    {
        primefact.push_back({s,1});
    }
     long long int divsum=1;
    for(auto el:primefact)
    {
        long long int primes=el.first;
        long long int c=el.second;
        long long int x=((benxp(primes,c+1))-1)/(primes-1);
        divsum=divsum*x;
    }
    cout<<divsum<<endl;
}


int main()
{
    sieve();
    long long int  t;
    cin>>t;
     for(long long int i=1;i<=t;i++)
    {
       long long int n,m;
        cin>>n>>m;
         long long int s=pow(n,m);

         cout<<"Case "<<i<<":"<<' ';
          fact(s);

    }

}
