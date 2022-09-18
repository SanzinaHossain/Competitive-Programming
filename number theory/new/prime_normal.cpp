#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    bool isprime=true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
