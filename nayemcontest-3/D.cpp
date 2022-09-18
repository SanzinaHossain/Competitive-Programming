#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,x,t;
    string s1,s2;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        map<string,int> mp;
        cin>>n;
        while(n--)
        {
            cin>>s1>>x;
            mp[s1]=x;
        }
        cin>>d>>s2;
        if(mp.count(s2)==1)
        {
            if(mp[s2]<=d)
            {
                cout<<"Case "<<i<<": Yesss"<<endl;
            }
           else if(mp[s2]>d && mp[s2]<d+5)
            {
                cout<<"Case "<<i<<": Late"<<endl;
            }
          else if(mp[s2]>d+5)
           {
            cout<<"Case "<<i<<": Do your own homework!"<<endl;
           }
        }
        else
            {
            cout<<"Case "<<i<<": Do your own homework!"<<endl;
        }
    }
}
