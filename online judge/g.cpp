
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{

  /* Declare an array to store Fibonacci numbers. */

  int f[n+1];

  int i;



  /* 0th and 1st number of the series are 0 and 1*/

  f[0] = 0;

  f[1] = 1;



  for (i = 2; i <= n; i++)

  {

      f[i] = f[i-1] + f[i-2];

  }



  return f[n];
}
int countOddWays(int n)
{

    return fib(n);
}
int main()
{
    int n;
    cin>>n;
    int l=fib(n);
    cout <<l;
}
