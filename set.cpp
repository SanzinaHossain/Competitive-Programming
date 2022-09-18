#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,n;
    set<int>s;
    set<int>::iterator tr;
    cin>>n;
    for(i=0;i!='\n' ;i++)
    {
        cin>>x;
        s.insert(x);
    }
    for(tr=s.begin();tr != s.end();tr++)
    {
        cout<<*tr<<' ';
    }
}

