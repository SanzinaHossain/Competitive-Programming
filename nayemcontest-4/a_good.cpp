#include<bits/stdc++.h>
using namespace std;
void func(int begin,int end,char ch,string res)
{
    if(begin==end)
    {
        res[begin]=ch;
        cout<<res<<endl;
        return;
    }
    int mid=(begin+end)/2;
    string temp=res;
    for(int i=begin;i<=mid;i++)
    {
        res[i]=ch;
    }
    func(mid+1,end,ch+1,res);
    for(int i=mid+1;i<=end;i++)
    {
        temp[i]=ch;
    }
    func(begin,mid,ch+1,temp);

}
int main()
{
    int n;
    cin>>n;
    string x(n+1,'_');
    func(1,n,'a',x);
}
