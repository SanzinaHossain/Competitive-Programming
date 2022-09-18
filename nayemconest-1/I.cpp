#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i;
    cin>>n;
    set<int> s;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }

   cout<<s.size();
}
