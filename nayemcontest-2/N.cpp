#include<bits/stdc++.h>
using namespace std;
char ar[105][105];
int main()
{
    	int n, m;
    	char ch;
    	set<char> s;
    	cin >> n >> m >> ch;
    	for(int i = 1; i <= n; i++)
        {
    		for(int j = 1; j <= m; j++)
    		{
    			cin >> ar[i][j];
    		}
    	}

    	for(int i = 1; i <= n; i++)
    	{
    		for(int j = 1; j <= m; j++)
    		{
    			if(ar[i][j] != ch && ar[i][j] != '.')
    			{
    				if(ar[i-1][j] == ch || ar[i+1][j] == ch || ar[i][j-1] == ch || ar[i][j+1] == ch)
    				{
    					s.insert(ar[i][j]);
    				}
    			}
    		}
    	}

    	cout << s.size();

}
