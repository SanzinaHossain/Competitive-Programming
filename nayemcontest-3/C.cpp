#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
    string s,txt;
    int n,m,x;
    cin>>n>>m;
    while(n--)
    {
        cin>>s>>x;
        mp[s]=x;
    }
   long long total;
    while(m--)
    {
        total=0;
        while(1)
        {
            cin>>txt;
            if(txt==".")
            {
                break;
            }
            total=total+mp[txt];
        }
        cout<<total<<endl;
    }
}
