#include<bits/stdc++.h>
using namespace std;
#define n 8
int vis[8+1][8+1];
int isValid(int x,int y)
{
    if(x<1 || y<1 || x>n || y>n)
    {
        return false;
    }
    return true;
}
int dfs(int x,int y,int c,int d)
{
    if(isValid(x-1,y+1)==true)
    {
        if(x-1==c && y+1==d)
        {
            return 1;
        }
        else
        {

        dfs(x-1 , y+1,c,d);
        }
    }
    if(isValid(x-1,y-1)==true)
    {
        if(x-1==c && y-1==d)
        {
            return 1;
        }
        else
        {

        dfs(x-1 , y-1,c,d);
        }
    }
    if(isValid(x+1,y-1)==true)
    {
            if(x+1==c && y-1==d)
        {
            return 1;
        }
        else
        {

        dfs(x+1 , y-1,c,d);
        }
    }
    if(isValid(x+1,y+1)==true)
    {
        if(x+1==c && y+1==d)
        {
            return 1;
        }
        else
        {

        dfs(x+1 , y+1,c,d);
        }
    }
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       int k=dfs(a,b,c,d);
       if(k==1)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }
}
