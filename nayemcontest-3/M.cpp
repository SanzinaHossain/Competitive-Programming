#include <bits/stdc++.h>
using namespace std;
int main()
{
        long long  k;
    	cin >> k;
    	string s;
    	cin >> s;
    	map<long, long> mp;
    	long long sum = 0, ans = 0,i=0;
    	mp[0]=1;
    	while(i<s.size())
        {
            //cout<<s[i]<<endl;
    		sum = sum+(s[i]-'0');
    		//cout<<sum<<endl;
    		if(sum >= k)
            {
                ans =ans+ mp[sum - k];
            }
    		mp[sum]++;
            i++;
    	}
    	cout << ans << endl;
}
