    #include <bits/stdc++.h>
    using namespace std;
    int main(){
      ios::sync_with_stdio(0);
      int n;
      cin >> n;
      vector<int> c(n);
      for(int i = 0; i < n; ++i) cin >> c[i];
      sort(begin(c),end(c));
      int nmax = 1, e = 0;
      for(int b = 0; b < n; ++b){
        while(e < n and c[e] <= 2*c[b]) ++e;
        nmax = max(nmax,e-b);
        if(e == n) break;
      }
      cout << n-nmax;
      return 0;
    }
