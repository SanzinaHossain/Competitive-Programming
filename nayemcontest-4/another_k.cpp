#include<bits/stdc++.h>
using namespace std;
long long val[50];
bool cal[50];

long long fib(long long n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(cal[n]==1) return val[n];
    else cal[n]=1;
    val[n]=fib(n-1)+fib(n-2);
    return val[n];

}

int main()
{
    long long n;
    cin>>n;
    cout<<fib(n);
}
