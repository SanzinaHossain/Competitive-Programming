#include<bits/stdc++.h>
using namespace std;
int n,m;
bool vis[1000][1000];
bool isValid(int x , int y)
{
    if(x<1 || y<1 || x>n || y>m)
    {
        return false;
    }
    if(vis[x][y]==true)
    {
        return false;
    }

    return true;
}
void dfs(int x , int y)
{
    vis[x][y]=1;
    cout<<x<<' '<<y<<endl;
    if(isValid(x-1,y)==true)
    {
        dfs(x-1 , y);
    }
    if(isValid(x,y-1)==true)
    {
        dfs(x , y-1);
    }
    if(isValid(x,y+1)==true)
    {
            dfs(x , y+1);
    }
    if(isValid(x+1,y)==true)
    {
        dfs(x+1 , y);
    }

}
int main()
{
    cin>>n>>m;
    dfs(1,1);
}
