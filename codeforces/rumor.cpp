#include<bits/stdc++.h>
using namespace std;

long long int N,M,A[100002],cor[100002],m;
vector<long long int> G[100002];

void dfs(long long int v){
	cor[v]=1;
	for(long long int u:G[v]){
		if(!cor[u]){
			m=min(m,A[u]);
			dfs(u);
		}
	}
}

int main(){
	cin >> N >> M;
	long long int a,b,saida=0;
	for(long long int i=1;i<=N;i++){
		cin >> A[i];
	}
	while(M--){
		cin >> a >> b;
		G[b].push_back(a);
		G[a].push_back(b);
	}
	for(long long int i=1;i<=N;i++)
		if(!cor[i]){
		m=A[i];
		dfs(i);
		saida+=m;
		}
	cout << saida << '\n';
}
