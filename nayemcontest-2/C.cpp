#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i;
    string str;
    set<int>s;
    while(cin>>str)
    {
        cin>>x;
         if(str=="insert")
             {
                 if(s.count(x)==0)
                 {
                     s.insert(x);
                 }
             }
             else if(str=="delete")
             {
                 if(s.count(x)==1)
                 {
                     s.erase(x);
                 }
             }
             else if(str=="exists")
             {
                 if(s.count(x)==1)
                 {
                     cout<<"true"<<endl;
                 }
                 else
                 {
                     cout<<"false"<<endl;
                 }
             }
            //cout<< *s.first<< *s.second;
    }
}
