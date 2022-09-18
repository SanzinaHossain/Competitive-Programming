#include<bits/stdc++.h>
using namespace std;
bool iscomp[10000];

vector<int>prime;
void sieve(int m)
{
    for(int i=2;i<=m;i++)
    {
        if(iscomp[i])
        {
            continue;
        }
        for(int j=2*i;j<=m;j+=i)
        {
            iscomp[j]=true;

        }
        prime.push_back(i);


    }
}
vector<int>vec;
void sum(int x)
{
    for(int i=0;i<x-1;i++)
    {
        int cnt=prime[i]+prime[i+1]+1;
        if(!iscomp[cnt])
       {

        vec.push_back(cnt);
       }
        //cout<<vec[i]<<endl;

    }
}
int main()
{
    int n,k;
    cin>>n>>k;

    sieve(1010);

   /* for(auto el:prime)
    {
        cout<<el<<' ';
    }
    cout <<endl;*/
    sum(170);
    /*for(auto el:vec)
    {
        cout<<el<<' ';
    }*/
    int mx=upper_bound(begin(vec),end(vec),n)-begin(vec);
    if(mx>=k)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
