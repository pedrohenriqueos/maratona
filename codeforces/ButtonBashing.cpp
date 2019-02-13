#include<bits/stdc++.h>

using namespace std;

int T,N,M;
vector<int> A;
set<int> S;
pair<int,int> bfs(){
	queue< pair<int,int> > pq;
	pq.push({A[0],1});
	if(M==0)
		return make_pair(0,0);
	S.insert(A[0]);
	while(!pq.empty()){
		int u=pq.front().second;
		int d=pq.front().first;
		pq.pop();
		if(d>=M){
			d-=M;
			while(!pq.empty()){
				int p=pq.front().second;
				int d1=pq.front().first;
				pq.pop();
				if(p==u)
					d=min(d,d1-M);
			}
			return make_pair(u,d);
		}
		for(int i=0;i<N;i++)
			if(S.find(d+A[i])==S.end()){
				S.insert(d+A[i]);
				pq.push({(d+A[i]),u+1});
			}
	}
	return make_pair(0,0);
}
int main(){
	cin >> T;
	while(T--){
		A.clear();
		S.clear();
		cin >> N >> M;
		for(int i=0;i<N;i++){
			int a;
			cin >> a;
			A.push_back(a);
		}
		pair<int,int> out=bfs();
		cout << out.first << " " << out.second << '\n';
	}
}
