#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n;
    if(n%2==0)
    {
        k=n/2;
        cout<<k<<endl;
        for(i=0;i<k;i++)
        {
            cout<<2<<' ';
        }
    }
    else{
        k=n/2;
        cout<<k<<endl;
        for(i=0;i<k-1;i++)
        {
            cout<<2<<' ';
        }
        cout<<3;
    }
}
