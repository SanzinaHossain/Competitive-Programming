#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n,k;
      scanf("%d%d",&n,&k);
      vector<int> vec(n);
      for(auto &el:vec)
      {
         scanf("%d",&el);
      }
      map<char, int > mp;
      int begin=0,end=0,l,r,ans=0;
      while(begin<n)
      {
		while(end<n && mp.size()<=k)
		{
		    if(mp.size()==k && mp.count(vec[end])==0)
            {
                break;
            }
            mp[ vec[end] ]++;
            end++;
		}
		if(ans<end-begin)
        {
            ans=end-begin;
            l=begin;
            r=end;
        }
        mp[vec[begin]]--;
		if(mp[vec[begin]]==0)
        {
            mp.erase(vec[begin]);
        }

        begin++;
      }
      printf("%d %d",l+1,r);
}
