#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,l,r,k,max;
    cin>>n>>m;
    vector<long long> vec(n+2);
    while(m--)
    {
        cin>>l>>r>>k;
        vec[l]=vec[l]+k;
        vec[r+1]=vec[r+1]-k;
    }
    max=vec[1];
    //cout<<max<<' ';
    for(int i=1;i<=n;i++)
    {
        vec[i]=vec[i]+vec[i-1];
        if(max<vec[i])
        {
            max=vec[i];
        }
    }
    cout<<max<<endl;
}

