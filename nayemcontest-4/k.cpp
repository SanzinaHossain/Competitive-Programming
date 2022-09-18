#include<bits/stdc++.h>
using namespace std;
long long fib(long long n,long long a=1,long long b=1)
{
      if( n==0)
      {
          return a ;
      }
      if(n==1)
      {
          return b;
      }

      return (fib(n-1,b,a+b));

}

int main()
{
    long long n;
    cin>>n;
    if(n<1)
    {
        return 0;
    }
    cout<<fib(n);
}
