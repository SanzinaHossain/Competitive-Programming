#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,i=0;
    cin>>t;
    while(t--)
    {
        i++;
        int n,d;
        map<string,int>mp;
        string s1,s2;
        int x;
        cin>>n;
        mp.clear();
        for(int i=1 ; i<=n ; i++)
        {
            cin>>s1>>x;
            mp[s1] = x;
        }
        cin>>d>>s2;
        int a = mp[s2];
        if(a<=d && a!=0)
        {
            cout<<"Case "<<i<<": Yesss"<<endl;
        }
        else if(a==0 || (a>d))
        {
            if(a>(d+5)|| a==0)
            {
                cout<<"Case "<<i<<": Do your own homework!"<<endl;
            }
            else if(a<=(d+5))
            {
                cout<<"Case "<<i<<": Late"<<endl;
            }
        }

    }
    return 0;

}

