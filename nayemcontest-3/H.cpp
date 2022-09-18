#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define mod 1000000007
int main() {

    ll test,i,j,n,sum,m,k;
    cin>>test;
    while(test--)
    {
        cin>>n>>k;
        vector<ll> a(n);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sum=0;
        for(i=0;i<k;i++)
        {
            cout<<a[i]<<' ';
            sum=sum+a[i];
            a.push_back(a[i]);
        }
        j=0;
        m=sum;
        cout<<endl<<m<<endl;
        cout<<a.size()<<endl;
        for(i=k;i<a.size();i++)
        {
            sum=sum+a[i]-a[j++];
            cout<<sum<<' ';
            m=max(sum,m);
        }
        cout<<endl;
        cout<<m<<endl;
    }
	return 0;
}

