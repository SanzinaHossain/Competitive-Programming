#include<bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    int c=0;
    vector<int>pos(n+1);
    vector<bool>iscomp(n+1);
    for(int i=2;i<=n;i++)
    {
        if(iscomp[i]==false)
        {
            for(int j=i*2;j<=n;j=j+i)
            {
                iscomp[j]=true;
                pos[j]++;
            }
        }
    if(pos[i]==2)
    {
        c++;
    }
    }
    cout<<c<<endl;
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
}
