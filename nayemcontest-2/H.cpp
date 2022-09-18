#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    set<char>s;
    while(cin>>x)
    {
        if(x !='{' && x!=',' && x!='}')
            {
                s.insert(x);
            }
    }
    cout<<s.size();
}
