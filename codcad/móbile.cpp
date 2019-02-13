#include<bits/stdc++.h>
using namespace std;

vector<int> G[100001];
int cor[100001],ponto,compriponto;
class Comp{
	public:
		int dist=0,compri=0;
};
Comp H[100001];
bool veri;
void bfs(int v){
	queue<int> q;
	q.push(v);
	cor[v]=1;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int w:G[u]){
			if(!cor[w]){
				q.push(w);
				cor[w]=1;
				H[w].dist=H[u].dist+1;
					
			}
			if(G[u].size()>1 and !veri){
				veri=true;
				ponto=H[w].dist;
			}
		}		
	}

}
void dfs(int v){
	cor[v]=1;
	int aux=0;
	for(int u:G[v]){
		if(!cor[u]){
			dfs(u);
			aux+=H[u].compri;
		}
	}
	H[v].compri=G[v].size()+aux;
	if(H[v].dist==ponto and !veri){
		compriponto=H[v].compri;
		veri=true;
	}
}
int main(){
	int T;	
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int a,b;
		scanf("%d %d",&a,&b);
		G[b].push_back(a);
	}
	veri=false;
	ponto=-1;
	bfs(0);
	memset(cor,0,sizeof(int)*(T+1));
	veri=false;
	dfs(0);
	bool flag=true;
	for(int i=1;i<=T;i++){
		if(H[i].dist==ponto){
			if(H[i].compri==compriponto)
				continue;
			else{
				flag=false;
				break;
			}
		}
	} 
	cout << ((flag)?"bem\n":"mal\n");
}
