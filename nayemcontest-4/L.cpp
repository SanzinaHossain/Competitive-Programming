#include<bits/stdc++.h>
using namespace std;
long long sum=0,a[100010],b=0,x,y,n,d;
long long digit(long long x)
{   if(x==0)
       return 0;
    sum+=x%10;
    digit(x/10);
    return sum;
}
void input(int n)
{   if(n==0) return;
    cin>>a[n];
    input(n-1);
}
long long call(int n)
{ if(n==0) return d;
   y=digit(a[n]);
   sum=0;
   if(y<=b)
   {   b=y;
       d=a[n];
   }
   call(n-1);
}
int main()
{
cin>>n;
input(n);
y=a[n];
b=1e9;
cout<<call(n)<<endl;
return 0;
}
