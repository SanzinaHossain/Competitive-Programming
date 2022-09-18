#include <bits/stdc++.h>
using namespace std;
int main()
 {
    	int t;
    	cin>>t;
    while (t--)
        {
    		int n, x;
            cin>>n>>x;
    		int p;
    		set<int> s;
    		for(int i=0;i<n;i++)
                {
                    cin>>p;
                   s.insert(p);
                }
    		int v=0;
    		while(x != 0)
            {
    			v++;
    			if (s.count(v)==0)
    			{
    			    x--;
    			}
    		}
    		while (s.count(v+1)==1)
            {
                v++;
            }
    		cout<<v<<endl;

    	}
    }

