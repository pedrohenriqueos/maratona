#include<bits/stdc++.h>
using namespace std;

vector<int> G[28];
int cor[28];

void dfs(int v){
	cout << (char)(v+'a') << ",";
	cor[v]=1;
	for(int u:G[v])
		if(!cor[u])
			dfs(u);	
}

int main(){
	int N,caso=1;
	cin >> N;
	while(N--){
		int V,E;
		cin >> V >> E;
		for(int i=0;i<V;i++)
			G[i].clear();
		memset(cor,0,sizeof(int)*(V+1));
		while(E--){
			char a,b;
			cin >> a >> b;
			G[(int)(a-'a')].push_back((int)(b-'a'));
			G[(int)(b-'a')].push_back((int)(a-'a'));
		}
		for(int i=0;i<V;i++)
			sort(G[i].begin(),G[i].end());
		int saida=0;
		cout << "Case #" << caso++ << ":";
		for(int i=0;i<V;i++){
			if(!cor[i]){
				cout << '\n';
				saida++;
				dfs(i);
			}	
		}
		cout << '\n' << saida << " connected components\n\n";	
	}
}
