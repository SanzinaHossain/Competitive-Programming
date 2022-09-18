#include<bits/stdc++.h>
using namespace std;
//int ar[1000];
int main()
{
    int t,n,x,i,j,d;
    cin>>t;
    while(t--)
    {
        int ar[1000]={0};
        cin>>n>>x;
        for(i=1;i<=n;i++)
        {
            cin>>d;
            ar[d]=1;

        }
        j=1;
        while(x!=0)
        {
            if(ar[j]==0)
            {
                x--;
            }
            j++;
        }
        j--;
        cout<<j<<' ';
        while(ar[j+1]==1)
        {
            j++;
        }
        cout<<j<<endl;
    }
}
