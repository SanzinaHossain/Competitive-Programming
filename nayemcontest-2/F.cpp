#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;
    string str;
    set<string> s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>str;
            s.insert(str);
        }

    cout<<s.size()<<endl;
    s.erase(s.begin(),s.end());
    }
}
