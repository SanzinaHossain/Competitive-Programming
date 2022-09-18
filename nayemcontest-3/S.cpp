#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(auto &el:vec)
    {
        cin>>el;
    }
    int turn=0;
    int s=0,d=0,i;
   for(i=0;i<n;i++)
    {
         if(turn%2==0)
         {
             s=s+max(vec[i],vec[n-1]);
         }
         if(turn%2==1)
         {
             d=d+max(vec[i],vec[n-1]);
         }
         if(vec[n-1]>vec[i])
         {
            i--;
            n=n-1;
         }
         turn++;
    }
    cout<<s<<' '<<d;
}
