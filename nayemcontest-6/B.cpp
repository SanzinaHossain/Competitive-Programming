#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll n,q,m;
    while(cin>>n)
 {

    vector <ll> v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }

    cin>>q;
    while(q--)
    {
        cin>>m;
       ll low=lower_bound(begin(v1),end(v1),m)-begin(v1);
        ll high=upper_bound(begin(v1),end(v1),m)-begin(v1);
        cout<<low<<' '<<high<<endl;
        if(low==0) cout<<"X"<<' ';
        else
        {
            cout<<v1[low-1]<<' ';
        }
        if(high==n)
        {
            cout<<"X"<<endl;
        }
        else
        {
            cout<<v1[high]<<endl;
        }
    }
 }
}
