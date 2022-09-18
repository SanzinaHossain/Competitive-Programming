#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b);
int arr[105];
int result=arr[1];
void input(int n)
{


    if(n==0)
    {
        return;
    }
    input(n-1);
    cin>>arr[n];
}
int call( int n)
{
    if(n==0)
    {
        return 0;
    }
    if(calculated[n]==1) return val[n];
    else calculated[n]=1;
    call(n-1);
    result=gcd (arr[n],result);
    val[n]=result;
    if(result==1)
    {
       return 1;
    }
    return result;

}
int gcd(int a,int b)
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
    int n;
    cin>>n;
    input(n);
    int x=call(n);
    cout<<x;


}
