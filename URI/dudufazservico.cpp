#include<bits/stdc++.h>
using namespace std;

vector<int> G[10002];
int cor[10002];
int N,M;
bool  flag;
bool dfs(int v){
	cor[v]=1;
	for(int u:G[v]){
		if(!cor[u]){
			dfs(v);
		}else{
			return 1;
		}
	}
	return 0;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> N >> M;
		for(int i=0;i<=N;i++)
			G[i].clear();
		while(M--){
			int a,b;
			cin >> a >> b;
			G[a].push_back(b);
		}
		flag=false;
		for(int i=1;i<=N;i++){
			if(dfs(i))
				flag=true;
		}
		(flag)? cout << "SIM\n":cout << "NAO\n";
	}
}
