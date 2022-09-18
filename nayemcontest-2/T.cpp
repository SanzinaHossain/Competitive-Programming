#include<bits/stdc++.h>
using namespace std;
bool comp( string a,string b)
{
    string f=a+b;
    string s=b+a;
    return (f>s);
}
int main()
{
    int n;
    while(cin>>n , n>0)
    {
        vector<string> vec(n);
    for(auto &el:vec)
    {
        cin>>el;
    }
    sort(begin(vec), end(vec), comp);
    for( auto el: vec)
    {
        cout<<el;
    }
    cout<<endl;
    }
    return 0;

}
