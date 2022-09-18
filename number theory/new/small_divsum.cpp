#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int divsum[1000];
int main()
{
    int n;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j=+i)
        {
            divsum[j]=divsum[j]+i;
        }
    }
    cout<<1<<endl;
}
