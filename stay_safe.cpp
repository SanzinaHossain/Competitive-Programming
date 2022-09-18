#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ar[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=1;j<=ar[i];j++)
        {
            if(ar[i]%j==0)
            {
                count++;
            }
        }
        if(count==3)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}
