#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    if((n*m)%(a*a)!=0)
    {
        cout<<(2*((n*m)/(a*a)))<<endl;
    }
    else
    {
        cout<<(n*m)/(a*a)<<endl;
    }

}
