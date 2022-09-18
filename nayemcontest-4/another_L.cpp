#include<bits/stdc++.h>
using namespace std;
long long n,arr[100010],m,ans=2e9,x,l;
long long digit(long long k)
{
    if(k==0)
    {
        return 0;
    }
    return (k%10)+digit(k/10);
}
long long call(long long n)
{
    if(n==0)
    {
        return l;
    }
    m=digit(arr[n]);
    if(m<=ans)
    {
        ans=m;
        l=arr[n];
    }
    call(n-1);
}
void input(long long n)
{
    if(n==0)
    {
        return;
    }
    cin>>arr[n];
    input(n-1);
}
int main()
{
    cin>>n;
    input(n);
    m=arr[n];
    long long x=call(n);
    cout<<x<<endl;
}
