#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t,a,b;
    cin>>n>>k;
    vector<int> s,s1,s2;
    while(n--)
    {
        cin>>t>>a>>b;
        if(a==1 && b==1)
        {
            s.push_back(t);
        }
        if(a==0 && b==1)
        {
            s1.push_back(t);
        }
        if(a==1 && b==0)
        {
            s2.push_back(t);
        }
    }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int m=min(s1.size(),s2.size());
        for(int i=0;i<m;i++)
        {
            int x=s1[i]+s2[i];
            s.push_back(x);
        }
        sort(s.begin(),s.end());
        if(s.size()<k)
        {
            cout<<-1;
        }
        else
        {
            int sum=0;
            for(int i=0;i<k;i++)
            {
                sum=sum+s[i];
            }
            cout<<sum;
        }



}
