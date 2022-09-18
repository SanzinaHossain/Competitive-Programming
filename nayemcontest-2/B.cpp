#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    set<string> st;
    set<string>:: iterator it;
    while(cin>>str)
    {
        string s="";
        if(str=="0")
        {
            break;
        }
        for(int i=0; i<str.size(); i++)
        {
            char ch = tolower(str[i]);
            if(ch>=97 && ch<=122)
                {
                    s = s+ch;
                }
            else if (s != "")
            {
                st.insert(s);
                s = "";
            }

        }
        if(s!="")
            {
                st.insert(s);
            }
    }
    for(it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
