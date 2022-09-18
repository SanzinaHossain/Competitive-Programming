#include<bits/stdc++.h>
using namespace std;
int divsum[10000000];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j=j+i)
        {
            divsum[j]+=i;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<divsum[i]<<' ';
    }
}
