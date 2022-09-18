#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    string x;
    set<string>s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    for (auto it=s.begin();it!=s.end();it++)
       {
          cout <<*it<< endl;
       }
}
