#include <bits/stdc++.h>
using namespace std;
int main()
{
        long long  k,one=0,ans=0;
    	cin >> k;
    	string s;
    	cin >> s;
    	long long n=s.size();
    	map<long long, long long > mp;
    	for(int i=0;i<n;i++)
        {
            if(s[i]=='1') one++;
            if(one==k) ans++;
            if(one>=k) ans=ans+mp[one-k];
            mp[one]++;
        }
    	cout << ans << endl;
}
