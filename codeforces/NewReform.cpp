#include<bits/stdc++.h>
using namespace std;

int N,M,a,b,cor[100002],saida;
vector<int> G[100002];
bool flag;
void dfs(int v,int z){
	cor[v]=1;
	for(int u:G[v]){
		if(!cor[u])
			dfs(u,v);
		else if(u!=z)
			flag=false;
	}
}
int main(){
	cin >> N >> M;
	while(M--){
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	for(int i=1;i<=N;i++){
		if(!cor[i]){
			flag=true;
			dfs(i,-1);
			saida+=flag;
		}
	}
	cout << saida << '\n';
}
