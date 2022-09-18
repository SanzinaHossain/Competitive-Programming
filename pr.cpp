#include<bits/stdc++.h>
using namespace std;
#define k 1e5
vector<long long >prime(k);
void sieve(long long int n)
{
    vector<bool>iscomp(n+1);
    for(int i=2;i*i<=n;i++)
    {
        if(iscomp[i]) continue;
        for(int j=2*i;j<=n;j+=i)
        {
            iscomp[j]=true;
        }

    }
     prime.push_back(2);
     for(int i=3;i<=n;i=i+2)
     {
         if(iscomp[i]==0)
         {
             prime.push_back(i);
         }
     }
}
int main()
{
    sieve(1e5);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int c=0;
            for(int i=0;i<n;i++)
            {
                if(n%prime[i]==0 && prime[i]<=n)
                {
                    c++;
                    break;
                }
            }
            if(c==0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
