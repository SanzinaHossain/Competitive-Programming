    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    	int t,n,m,i;
    	cin>>t;
    	while(t--){
    		cin>>n>>m;
    		int a;
    		bool b[1000]={0};
    		for(i=1;i<=n;i++){
    			cin>>a;
    			b[a]=1;
    		}
          int i=1;
    		while(m!=0){
    			if(b[i]==0) m--;
    			i++;
    		}


    		while(b[i]==1)
            {
                i--;
            }
    		cout<<i<<endl;
    	}
    }

