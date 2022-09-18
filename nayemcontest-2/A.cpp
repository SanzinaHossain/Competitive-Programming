#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    set<int>s;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(s.count(x)==1)
        {
            cout<<"Yes"<<' '<<s.size()<<endl;
        }
        else
        {
            s.insert(x);
            cout<<"No"<<' '<<s.size()<<endl;
        }
    }
}
