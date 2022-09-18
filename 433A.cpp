#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p=0,q=0,need_100,need_200,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n==100)
        {
            p++;
        }
        else
        {
            q++;
        }
    }

    need_200=q%2;
    need_100=p-(need_200*2);
    if(need_100>=0 && need_100%2==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
