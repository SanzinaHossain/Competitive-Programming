#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,s,k;
        cin>>a>>b>>c;
        k=a+b+c;
       if(a==1 && b==1 && c==1)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           s=(a-1)+(b-1)+(c-1)+1;
           if(s<=k && s%7==0)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }

    }
}

