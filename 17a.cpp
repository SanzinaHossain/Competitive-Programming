#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
void sieve(int n,int k)
{
    int c=0;
    vector<bool>iscomp(n+1);
    for(int i=2;i*i<=n;i++)
    {
        if(iscomp[i]==true)
        {
            continue;
        }
        for(int j=i*2;j<=n;j=j+i)
        {
            iscomp[j]=true;
        }
    }
    prime.push_back(2);
    for(int i=3;i<=n;i=i+2)
    {
        if(iscomp[i]==0)
        {
            //cout<<i<<endl;
            prime.push_back(i);
        }
    }
    for(int i=0;i<prime.size()-1;i++)

    {
        int m=prime[i]+prime[i+1]+1;
        //cout<<m<<endl;
        if(iscomp[m]==0 && m<=n)
        {
            c++;
        }
    }
    //cout<<"c="<<c<<endl;
    if(c>=k)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    sieve(n,k);

}

