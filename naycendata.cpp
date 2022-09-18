#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            res=min(res,2*i+2*(n/i));
            cout<<res<<endl;
        }
    }
    cout<<res;
}
