#include<bits/stdc++.h>
using namespace std;
int divsum1[1000000] ;
int divsum2[1000000] ;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            divsum1[j]=divsum1[j]+i;
            divsum2[j]++;
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<divsum1[x]<<' '<<divsum2[x]<<endl;
    }
}
