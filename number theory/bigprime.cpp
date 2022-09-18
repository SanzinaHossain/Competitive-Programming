// kono akta number ke sobceye bro kon prime number diya div kra jay//
#include<bits/stdc++.h>
using namespace std;
int n;
int lp[100000];
bool flag[1000000];
void sieve(int n)
{
    lp[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(flag[i])
        {
            continue;
        }
        for(int j=2*i;j<=n;j+=i)
        {
            flag[j]=1;
            lp[j]=i;
        }
        lp[i]=i;
    }
}
int main()
{
    cin>>n;
    sieve(n);
    for(int i=1;i<=n;i++)
    {
        cout<<lp[i]<<' ';
    }
    int x;
    cin>>x;
    map<int,int>vec;
    while(x>1)
    {
        vec[lp[x]]++;
        x=x/lp[x];
    }
    cout<<endl;
    for(auto el:vec)
    {
        cout<<el.first<<"^"<<el.second<<endl;
    }
    return 0;
}
