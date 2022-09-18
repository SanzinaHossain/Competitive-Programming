#include<bits/stdc++.h>
using namespace std;
string s;
long long func(long long begin,long long end,char ch)
{
    if(begin==end)
    {
        if(s[begin]==ch)
        {
            return 0;
        }
        return 1;
    }
    long long mid=(begin+end)/2;
    long long c1=0;
    for(long long i=begin;i<=mid;i++)
    {
        if(s[i]!=ch)
        {
            c1++;
        }
    }
    long long baki1=func(mid+1,end,ch+1);
    long long c2=0;
    for(long long i=mid+1;i<=end;i++)
    {
        if(s[i]!=ch)
        {
            c2++;
        }
    }
    long long baki2=func(begin,mid,ch+1);
    return min(c1+baki1,c2+baki2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cin>>s;
        s="_"+s;
        string x(n+1,'_');
        cout<<func(1,n,'a')<<endl;

    }
}
