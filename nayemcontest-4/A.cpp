#include<bits/stdc++.h>
using namespace std;
long long countDigit(long long n)
{
    if(n==0)
    {
        return 0;
    }
    return 1+countDigit(n/10);
}
int main()
{
    long long n;
    cin>>n;
    if(n==0)
    {
        cout<<1;
        return 0;
    }

    cout<<countDigit(n);
}
