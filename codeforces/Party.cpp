#include<bits/stdc++.h>
using namespace std;

int cor[2002],dist[2002],N,out;
vector<int> G[2002];
void bfs(int v){
	cor[v]=1;
	int resp=1;
	queue<int> q;
	q.push(v);
	dist[v]=1;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int w:G[u])
			if(!cor[w]){
				q.push(w);
				dist[w]=dist[u]+1;
				if(dist[w]>resp) resp = dist[w];
				cor[w]=1;
			}
	}
	out=max(out,resp);
}

int32_t main(){
	scanf("%d",&N);
	vector<int> k;
	for(int i=1;i<=N;i++){
		int a;
		scanf("%d",&a);
		if(a!=-1)
			G[a].push_back(i);
		else k.push_back(i);
	}
	for(auto &x:k)
			bfs(x);
	printf("%d\n",out);
}





