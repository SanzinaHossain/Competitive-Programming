#include<bits/stdc++.h>
using namespace std;
int ar[101];
int main()
{
    int n,a[101],b[101],i,p,q;
    cin>>n>>p;
    for(i=1;i<=p;i++)
    {
        cin>>a[i];
        ar[a[i]]=1;
    }
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>b[i];
        ar[b[i]]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(ar[i]==0)
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";

}
