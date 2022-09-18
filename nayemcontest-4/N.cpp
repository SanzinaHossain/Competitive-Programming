#include<bits/stdc++.h>
using namespace std;
long long arr[40];
long long result;
long long gcd(long long a,long long b)
{
    if(a==0)
    {
        return b;
    }
    gcd(b%a,a);
}
void input(long long n)
{


    if(n==0)
    {
        return;
    }
    input(n-1);
    arr[n]=n;
}
long long call( long long  n)
{

    if(n==0)
    {
        return result;
    }
    result=(arr[n]*result)/gcd (result,arr[n]);
    call(n-1);

}

int main()
{
    long long  n;
    cin>>n;
    input(n);
    result=arr[1];
    int x=call(n);
    cout<<x<<endl;
    return 0;


}
