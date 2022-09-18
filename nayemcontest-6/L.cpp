#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll func[10000000];
void full (ll x)
{
    func[0]=1;
    func[1]=1;
    for(int i=2;i<=x/i;i++)
    {
        if(func[i]==0)
        {
            for(int j=2*i;j<=x;j=j+i)
            {
                func[j]=1;
            }
        }
    }
}

int main()
{
    ll t;
    cin>>t;
    full(1000000);
    while(t--)
   {
     ll n;
     cin>>n;
    ll m=sqrt(n);
    if(m*m==n && func[m]==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
   }
}
