#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;
int main()
{
    string a,b,x;
    int n,m;
    cin >>n;
    cin.ignore();
    while(n--)
    {
        getline(cin,a);
        getline(cin,b);
        mp[a] =b;
    }
    cin>>m;
    cin.ignore();
    while(m--)
    {
        getline(cin,x);
        cout << mp[x] <<endl;
    }
    return 0;
}
