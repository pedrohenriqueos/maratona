#include<bits/stdc++.h>

using namespace std;

#define int long long
set<int> S;
int N,K,A,B;
int bfs(int v){
	priority_queue< pair<int,int>,vector< pair<int,int> >,greater< pair<int,int> > > q;
	q.push({0,v});
	while(!q.empty()){
		int d=q.top().first;
		int u=q.top().second;
		q.pop();
		if(u==1) return d;
		q.push({d+A,u-1});
		if(u%K==0)
			q.push({d+B,u/K});
	}
}
int32_t main(){
	cin >> N >> K >> A >> B;
	cout << bfs(N) << '\n';
}
