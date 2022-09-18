#include<bits/stdc++.h>
using namespace std;
long long gcd(long a,long b)
{
    if(b==0)
    {
        return a;
    }
    if(a==0)
    {
        return b;
    }
    if(a>=b)
    {
        return gcd(a%b,b);
    }
    if(b>a)
    {
        return gcd(a,b%a);
    }
}
int main()
{
    long long a,b;
    cin>>a>>b;
    long long x=gcd(a,b);
    cout<< (a*b)/x <<endl;
}
