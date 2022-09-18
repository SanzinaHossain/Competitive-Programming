#include <bits/stdc++.h>

using namespace std;

int main() {

	string str;
	cin >> str;
	vector<set<int>> arr(26);
	for (int i = 0; i < int(str.size()); ++i)
    {
		arr[str[i] - 'a'].insert(i);
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int tp;
		cin >> tp;
		if (tp == 1) {
			int pos;
			char c;
			cin >> pos >> c;
			pos--;
			arr[str[pos] - 'a'].erase(pos);
			str[pos] = c;
			arr[str[pos] - 'a'].insert(pos);
		}
		else
        {
			int l,r,k;
            int c=0;
            cin>>l>>r;
            for(char ch='a' ; ch<='z';ch++)
            {
                int index = ch-'a' ;
                auto it=arr[index].lower_bound(l-1);
                if(it!=arr[index].end())
                {
                    if(*it <= r-1)
                    {
                        c++;
                    }
                }
            }
              cout<<c<<endl;
		}
	}

	return 0;
}
