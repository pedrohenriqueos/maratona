#include<bits/stdc++.h>
using namespace std;

int N,M,saida;
vector<int> G[1002];
int cor[1002];
int dfs(int v){
	cor[v]=1;
	for(int u:G[v])
		if(!cor[u]){
			saida++;
			dfs(u);
		}
}
int main(){
	while(cin >> N >> M){
		for(int i=0;i<=N;i++)
			G[i].clear();
		memset(cor,0,sizeof(int)*(N+1));
		while(M--){
			int a,b;
			cin >> a >> b;
			G[a].push_back(b);
			G[b].push_back(a);
		}
		saida=1;
		int K;
		cin >> K;
		dfs(K);
		cout << saida << '\n';
	}
}
