#include <bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define s second
#define f first
#define mp make_pair
#define MAXN 10100
#define pb push_back
typedef pair<int,int> pii;

int N, M,dist[MAXN];
bool processado[MAXN];         
vector<pii> vizinhos[MAXN];
 
int Prim(){
	memset(dist,63,sizeof(dist));
	dist[0] = 0;                                
	priority_queue<pii> fila; 
	fila.push(mp(0,0));                   
	while(true){
		int davez = -1;
		while(!fila.empty()){
			int atual = fila.top().s;
			fila.pop();
			if(!processado[atual]){
				davez = atual;
				break;
			}
		}
		if(davez == -1) break;
		processado[davez] = true; 

		for(pair<int,int> u:vizinhos[davez]){
			int dista  = u.f;
			int atual = u.s;
			if( dist[atual] > dista and !processado[atual]){  
				dist[atual] = dista;                         
				fila.push(mp(-dist[atual], atual));      
			}
		}
	}	
	int custo_arvore = 0;
	for(int i = 0;i < N;i++) 
		custo_arvore += dist[i];
	
	return custo_arvore;
}

int main(){
	int a,b,c;
	cin >> N >> M;
	for(int i=0;i<M;i++){
		cin >> a >> b >> c;
		vizinhos[a].pb(mp(c,b));
		vizinhos[b].pb(mp(c,a));
	}
	cout << Prim() << '\n';
}

