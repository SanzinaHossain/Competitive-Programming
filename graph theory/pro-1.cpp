#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,a,b;
    cin>>n>>m;
    vector<int>vec[n+1];
    while(m--)
    {
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    cout<<"Adjacent List:"<<endl;
   for(int i=1;i<=n;i++)
    {
        cout<<i<<":"<<' ';
        for(auto el:vec[i])
        {
            cout<<"->"<<el;

        }
        cout<<endl;
    }

}
