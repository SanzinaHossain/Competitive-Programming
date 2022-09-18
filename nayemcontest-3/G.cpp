#include<bits/stdc++.h>
using namespace std;
string c_string(map<string,long long>m)
{
    long long max=0;
    string result;
    for(auto el:m)
    {
        if(max<el.second)
        {
            max=el.second;
            result=el.first;
        }
    }
    return result;
}
int main()
{
    long long n,m;
    cin>>n>>m;
    map<string,string>mp;
    while(n--)
    {
        string chef,country;
        cin>>chef>>country;
        mp[chef]=country;
    }
    map<string,long long> chef_v,country_v;
    while(m--)
    {
        string chef;
        cin>>chef;
        chef_v[chef]++;
        string country=mp[chef];
        country_v[country]++;
    }
    cout<<c_string(country_v)<<endl;
    cout<<c_string(chef_v)<<endl;
}
