#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,n,count=0,x,i;
    set<int>s;
    cin>>n;
    cin>>p;
    while(p--)
    {
        cin>>x;
        s.insert(x);
    }
    cin>>q;
    while(q--)
    {
        cin>>x;
        s.insert(x);
    }
    for(i=1;i<=n;i++)
    {
        if(s.count(i)==1)
        {
            count++;
        }
    }
    cout<<count<<endl;
    if(count==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
}
