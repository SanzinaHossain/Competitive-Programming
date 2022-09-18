#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)

    {
        multiset<long long> s;
       long long  c=0,z,n,x,i,sum=0,ss,sum1=0;
        cin>>n>>z;
        for(i=0;i<n;i++)
        {
            cin>>x;
            sum=sum+x;
            sum1=sum1+(x/2);
            s.insert(x);
        }
        if(z>=(sum+sum1))
        {
            cout<<"Evacuate"<<endl;
        }
        else
        {

        while(z>0)
        {
            ss=*--s.end();
            z=z-(*--s.end());
            s.erase(--s.end());
            ss=ss/2;
            if(ss!=0)
            {
                s.insert(ss);
            }
            c++;
        }

        cout<<c<<endl;
        }

    }
    return 0;
}
