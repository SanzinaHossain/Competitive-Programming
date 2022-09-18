#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void palindrome(ll ar[],ll n)
{
    int flag=0;
    for(int i=0;i*i<n && n!=0;i++)
    {
        if(ar[i]!=ar[n-i-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n+2];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        if(n==1 or n==2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            palindrome(ar,n);
        }
    }
}
