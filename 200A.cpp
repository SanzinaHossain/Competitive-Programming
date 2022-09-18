#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll matrix[2005][2005];
int main()
{
    ll k,x,y;
    vector< pair<ll,ll> >vec;
    cin>>n>>m>>k;
    matrix[n][m]={0};
     for(int i=0;i<=m;i++)
     {
         matrix[0][i]=1;
         matrix[i][0]=1;
     }
      for(int i=0;i<=n;i++)
     {
         matrix[i][n+1]=1;

     }
    for(int i=1;i<=k;i++)
    {
        cin>>x>>y;
        if(matrix[x][y]==0)
        {
            matrix[x][y]=1;
            vec.push_back({x,y});

        }
        else
        {

            if(matrix[x][y+1]==0)
            {
                matrix[x][y+1]=1;
                vec.push_back({x,y+1});
            }
            else if(matrix[x][y-1]==0)
            {
                matrix[x][y-1]=1;
                vec.push_back({x,y-1});
            }
            else if(matrix[x-1][y]==0)
            {
                matrix[x-1][y]=1;
                vec.push_back({x-1,y});
            }
            else if(matrix[x+1][y]==0)
            {
                matrix[x+1][y]=1;
                vec.push_back({x+1,y-1});
            }

        }
    }
    for(auto el:vec)
    {
        cout<<el.first<<' '<<el.second<<endl;
    }
}
