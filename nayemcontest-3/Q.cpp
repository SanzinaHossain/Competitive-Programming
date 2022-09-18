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
        deque<int> v(n);
        for(auto &el: v)
        {
            cin>>el;
        }
        int prev_max=0,alice=0,bob=0,turn=0;
        while(v.size()>0)
        {

            if(turn%2==0)
            {
                int k=0;
                while(k<=prev_max && v.size()>0)
                {
                    k=k+v.front();
                    v.pop_front();
                }
                alice =alice+k;
                prev_max=k;
            }
            else
            {
                int k=0;
                 while(k<=prev_max && v.size()>0)
                {
                    k=k+v.back();
                    v.pop_back();
                }
                bob =bob+k;
                prev_max=k;
            }
            turn++;
        }
        cout<<turn<<' '<<alice<<' '<<bob<<endl;
    }
}
