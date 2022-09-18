#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,l;
    cin>>n>>m;
    vector<long long> vec(n+1),v(n+1);
    set<long long> mp;
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }
    for(int i=n;i>=1;i--)
    {
        mp.insert(vec[i]);
        v[i]=mp.size();

    }
    for(int i=1;i<=m;i++)
    {
        cin>>l;
        cout<<v[l]<<endl;
    }

}
