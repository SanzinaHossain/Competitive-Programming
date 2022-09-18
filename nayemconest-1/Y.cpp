#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i,j,p,odd,even;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        odd=0;
        even=0;
        for(i=0;i<n;i++)
        {
            cin>>p;
            if(p%2==0)

            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if((odd==0) || (odd%2==0 && n==x) || (even==0 && x%2==0))
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }

}
