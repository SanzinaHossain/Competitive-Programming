#include<bits/stdc++.h>
using namespace std;
long long N=200009;
int main()
{
    long long n,m,k,l,r;
    cin>>n>>m>>k;
    vector<long long> vec(N),vec1(N);
    while(n--)
    {
        cin>>l>>r;
        vec[l]+=1;
        vec[r+1]-=1;
    }
    for(int i=1;i<=N;i++)
    {
        vec[i]=vec[i]+vec[i-1];
        vec1[i]=vec1[i]+vec1[i-1]+(vec[i]>=m);
       // cout<<vec1[i]<<' ';

    }
    //cout<<endl;
    while(k--)
    {
         cin>>l>>r;
         cout<<vec1[r]-vec1[l-1]<<endl;
    }

}
