 #include <bits/stdc++.h>
using namespace std;

//Make a pair between vertex x and vertex y
void addedge(list<int>*ls,int x,int y){
	ls[x].push_back(y);
	ls[y].push_back(x);
}

//count the number of paths exists
void path_count(list<int>*ls,int s,int d,bool *visit,int &count){
	visit[s]=true;
	if(s==d){
		count++;
	}
	else{
		list<int>::iterator it;
		for(it=ls[s].begin();it!=ls[s].end();it++){
			if(!visit[*it]){
				path_count(ls,*it,d,visit,count);
			}
		}
	}
	visit[s]=false;
}

int main()
{
	list<int> ls[6];

	addedge(ls,0,1);
	addedge(ls,2,3);
	addedge(ls,3,4);
	addedge(ls,4,5);
	addedge(ls,1,2);
	addedge(ls,1,4);
	addedge(ls,3,0);

	bool visit[6];

	for(int i=0;i<6;i++){
		visit[i]=false;
	}

	int count=0;
	path_count(ls,0,4,visit,count);
	cout<<"Paths are : "<<count<<endl;

	return 0;
}
