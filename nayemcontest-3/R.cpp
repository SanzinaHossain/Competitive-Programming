#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<4)
        {
            cout<<-1<<endl;
        }
        else
        {
            deque<int> d{3,1,4,2};
            int l=n-4;
            int m=4;
            int turn =0;
            while(l>0)
            {
                if(turn%2==0 )
                {
                     d.push_back(m+1);
                     m=m+1;
                     l--;
                }
                else
                {
                    d.push_front(m+1);
                    m=m+1;
                    l--;
                }
                turn++;
            }
            for(auto el:d)
            {
                cout<<el<<' ';
            }
            cout<<endl;
        }
    }
}
