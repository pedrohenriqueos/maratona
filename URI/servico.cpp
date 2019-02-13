#include <bits/stdc++.h>
using namespace std;

class Grafo{
	int V;
    list<int> *adj;
    public:
    Grafo(int v){
       this->V = v;
       adj = new list<int>[v];
    }
    void adicionaAresta(int v1,int v2){
    adj[v1].push_back(v2);
    }
	bool dfs(int v){
	stack<int> pilha;
    bool vis[V],pilha_rec[V];
    for(int i=0;i<V;i++)
    	vis[i]=pilha_rec[i]=false;
        while(true){
       		bool achou=false;
            list<int>::iterator it;
            if(!vis[v]){
           		pilha.push(v);
                vis[v]=pilha_rec[v]=true;
            }
            for(it= adj[v].begin();it!=adj[v].end();it++){
             	if(pilha_rec[*it])
                	return true;
             	else if(!vis[*it]){
                	achou=true;
                	break;
             	}
          	}
          	if(!achou){
           		pilha_rec[pilha.top()]=false;
             	pilha.pop();
             	if(pilha.empty())
                	break;
             	v=pilha.top();
          	}else
             	v=*it;
       	}
       	return false;
	}
};
int main(){
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
		int N,M;
		bool s=false;
		cin >> N >> M;
		Grafo grafo(N);
		for(int j=0;j<M;j++){
			int A,B;
			cin >> A >> B;
			grafo.adicionaAresta(A-1,B-1);			
		}
		for(int j=0;j<N;j++)
			if(grafo.dfs(j))
				s=true;
		s ? cout << "SIM\n" : cout << "NAO\n";			
	}
}
