#include <bits/stdc++.h>
using namespace std;
long long arr[40],result,n;
long long gcd(long long a,long long b)
{
    if(a==0)
    {
        return b;
    }
    gcd(b%a,a);
}
void input(int n)
{   if(n==0) return;

    input(n-1);
    arr[n]=n;
}
long long call(int n)
{
    if(n==0)
    {
        return result;
    }
   result=(arr[n]*result)/gcd(result,arr[n]);
   call(n-1);
}
int main()
{
    cin>>n;
   input(n);
   result=arr[1];
   long long x=call(n);
   cout<<x<<endl;
    return 0;
}
