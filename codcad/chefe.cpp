#include<bits/stdc++.h>
using namespace std;

vector<int> G[503];
int cor[503],idade[503],saida;

void dfs(int v){
	cor[v]=1;
	for(int u:G[v])
		if(!cor[u]){
			if(idade[u]<saida)
				saida=idade[u];
			dfs(u);
		}
}
int main(){
	int N,M,I;
	while(cin >> N >> M >> I){
		memset(cor,0,sizeof(cor));
		for(int i=1;i<=N;i++)
			G[i].clear();
		for(int n=1;n<=N;n++)
			cin >> idade[n];	
		while(M--){
			int a,b;
			cin >> a >> b;
			G[b].push_back(a);
		}
		while(I--){
			char acao;
			int a1,a2;
			cin >> acao;
			if(acao=='P'){
				cin >> a1;
				saida=103;
				dfs(a1);
				memset(cor,0,sizeof(int)*(N+1));
				(saida==103)?cout << "*\n":cout << saida << '\n';
			}else{
				cin >> a1 >> a2;
				swap(G[a1],G[a2]);
				for(int i=1;i<=N;i++)
					for(int &u:G[i]){
						if(u==a1)
							u=a2;
						else if(u==a2)
							u=a1;
					}
			}
		}
	}
}
