#include<bits/stdc++.h>
using namespace std;
bool already[10010];
bool in[10010];
int conw[100010];
void add(int x)
{
    int temp=x,m;
    vector<int>pf;
    bool conflict=false;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            while(x%i==0)
            {
                x=x/i;
            }
            pf.push_back(i);
        }
    }
    if(x>1) pf.push_back(x);
    for(auto el:pf)
    {
        if(in[el]==true)
        {
             conflict=true;
             m=conw[el];
             cout<<"Conflict with "<<m<<endl;
             return;
        }
    }
        for(auto el:pf)
        {
            in[el]=true;
            conw[el]=temp;
        }
        already[temp]=true;
        cout<<"Success"<<endl;
}
void rmv(int x)
{
    int temp=x;
    vector<int>pf;
       for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            while(x%i==0)
            {
                x=x/i;
            }
            pf.push_back(i);
        }
    }
    if(x>1) pf.push_back(x);
    for(auto el:pf)
    {
        in[el]=false;
        conw[el]=0;
    }
    already[temp]=false;
    cout<<"Success"<<endl;
}
int main()
{
    int n,t;
    cin>>n>>t;
    while(t--)
    {
        int x;
        char ch;
        cin>>ch>>x;
        if(ch=='+')
        {
            if(already[x]==true)
            {
                cout<<"Already on"<<endl;
            }
            else
            {
                add(x);
            }

        }
        else if(ch=='-')
        {
            if(already[x]==false)
            {
                cout<<"Already off"<<endl;
            }
            else
            {
                rmv(x);
            }
        }
    }
}
