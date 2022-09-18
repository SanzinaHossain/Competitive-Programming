#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   vector<bool> iscomp(n+1);
   vector<int> vec;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(iscomp[i])
        {
            continue;
        }
        for(int j=2*i;j<=n;j=j+i)
        {
            iscomp[j]=true;
        }
        vec.push_back(i);
    }
    for(auto el:vec)
    {
        cout<<el<<' ';
    }

}
