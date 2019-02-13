#include<bits/stdc++.h>
using namespace std;

int v[10002],cor[10002],distp,M;
vector< pair<int,int> > G[10002];
void dfs(int w){
	cor[w]=1;
	for(pair<int,int> u:G[w]){
		if(!cor[u.second]){
			distp+=u.first;
			dfs(u.second);
			int cont=0;
			while(v[u.second]!=0){
				if(cont%2==0){
					int p=min(M,v[u.second]);
					v[w]+=p;
					v[u.second]-=p;
				}
				distp+=u.first;
				cont++;
			}
		}
	}
}
int main(){
	int N,a,b,c;
	cin >> N >> M;
	for(int i=1;i<=N;i++)
		cin >> v[i];
	N--;
	int x=N;
	while(N--){
		cin >> a >> b >> c;	
		G[a].push_back(make_pair(c,b));
		G[b].push_back(make_pair(c,a));
	}
	dfs(1);
	cout << distp << '\n';
}
