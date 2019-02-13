#include<bits/stdc++.h>
using namespace std;

vector<int> G[1001];
int cor[1001];
void dfs(int v){
	cor[v]=1;
	for(int w:G[v])
		if(!cor[w])
			dfs(w);
}

int main(){
	int N,M,quant=0;
	cin >> N >> M;
	memset(cor,0,sizeof(cor));
	while(M--){
		int a,b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	for(int i=1;i<=N;i++)
		if(!cor[i]){
			dfs(i);
			quant++;
		}
	cout << quant << '\n';
}
