#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 10000000
bool iscomp[10000000];


void sieve()
{
    iscomp[0]=1;
    iscomp[1]=1;
    for(int i=2;i<=MAX;i++)
    {
        if(iscomp[i])
        {
            continue;
        }
        for(int j=2*i;j<=MAX;j+=i)
        {
            iscomp[j]=1;
        }


    }
}
int main()
{
    sieve();
     ll t;
     cin>>t;
     while(t--)
     {
         ll n,m;
         cin>>n;
         m=sqrt(n);
         if(n==4)
         {
             cout<<"YES"<<endl;
         }
         else if(n%2==0)
         {
             cout<<"NO"<<endl;
         }
         else if(( m*m == n)  && (iscomp[m]==0))
         {
             cout<<"YES"<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }
     }
}
