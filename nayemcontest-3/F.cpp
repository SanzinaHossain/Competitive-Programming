#include<bits/stdc++.h>
using namespace std;
 map<string,int> mp;
int main()
{
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        mp[s]++;
    }
    cout<<"AC x "<<mp["AC"]<<endl;
    cout<<"WA x "<<mp["WA"]<<endl;
    cout<<"TLE x "<<mp["TLE"]<<endl;
    cout<<"RE x "<<mp["RE"]<<endl;
    return 0;
}

