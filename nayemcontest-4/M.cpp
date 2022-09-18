#include<bits/stdc++.h>
using namespace std;
long long l,r;
long long digit(long long n)
{
    if(n==0)
    {
        return 0;
    }
    return(n%10)+digit(n/10);
}
long long func(long long pos)
{
    if(pos>r)
    {
        return 2e9;
    }
    return min(digit(pos),func(pos+1));
}
long long cnt(long long pos,long long mn)
{
    if(pos>r)
    {
        return 0;
    }
    long long ds=digit(pos);
    if(ds==mn)
    {
        return 1+cnt(pos+1,mn);
    }
    return cnt(pos+1,mn);
}
int main()
{
    cin>>l>>r;
    long long mn=func(l);
    cout<<cnt(l,mn)<<endl;
}
