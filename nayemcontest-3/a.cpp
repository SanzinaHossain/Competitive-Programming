#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
map<int,int> mp;
int main()
{
    int n;
    while(cin>>n)
    {
        if(mp[n]==0)
        {
            vec.push_back(n);
            mp[n]=1;
        }
        else
        {
            mp[n]=mp[n]+1;
        }
    }

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" "<<mp[vec[i]]<<endl;
    }

    return 0;
