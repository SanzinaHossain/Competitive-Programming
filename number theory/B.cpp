#include<bits/stdc++.h>
using namespace std;
bool iscomp[3010];
vector<int>prime;
vector< int>vec;

void sieve(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(iscomp[i])
        {
            continue;
        }
        for(int j=2*i;j<=n;j+=i)
        {
            iscomp[j]=1;
        }
        prime.push_back(i);

    }
}
void fact(int n)
{
    int tmp=n;
        set<int> s;
        for(int i=0;i<prime.size();i++)
    {
        if(n%prime[i]==0)
        {
             int cnt=0;
            while(n%prime[i]==0)
            {
                n=n/prime[i];
                cnt++;
            }
              s.insert(prime[i]);
        }

    }
    if(n>1)
    {
        s.insert(prime[n]);
    }
    if(s.size()==2)
    {
        vec.push_back(tmp);
    }
}



int main()
{
    int n;
    cin>>n;
    sieve(3010);
    for(int i=2;i<=3010;i++)
    {
        fact(i);
    }
    int m=upper_bound(begin(vec),end(vec),n)-begin(vec);
    cout<<m<<endl;

}
