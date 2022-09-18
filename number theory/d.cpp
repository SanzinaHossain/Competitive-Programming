#include<bits/stdc++.h>
using namespace std;
#define MAX 86028122
bool iscomp[MAX+10];
vector<long long int>prime;
void  sieve()
{
    for(long long int i=2;i*i<=MAX;i++)
    {
        if(!iscomp[i])
      {

        for(long long int j=i*i;j<=MAX;j+=i)
        {
            iscomp[j]=true;
        }
      }
    }
        for(long long int i=2;i<=MAX;i++)
        {
            if(!iscomp[i])
            {
                prime.push_back(i);
            }
        }

}
int main()
{
    sieve();
    long long int q,x;
    cin>>q;
    while(q--)
    {
        cin>>x;

    cout<<prime[x-1]<<endl;
    }
   /* for(long long int i=1;i<=prime.size();i+=100)
    {
        cout<<prime[i-1]<<endl;
    }*/
    //cout<<prime.size();
}
