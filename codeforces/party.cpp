#include<bits/stdc++.h>
using namespace std;

vector<int> G[2002];
int cor[2002];
void dfs(int v){
	cor[v]=1;
	for(int u:G[v])
		if(!cor[u])
			dfs(u);
}
int main(){
	int N,saida=0;
	cin >> N;
	for(int i=1;i<=N;i++){
		int a;
		cin >> a;
		if(a!=-1){
			G[a].push_back(i);	
		}
	}
	for(int i=1;i<=N;i++)
		if(!cor[i]){
			saida++;
			dfs(i);
		}
	cout << saida << '\n';
}
