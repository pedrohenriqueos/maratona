const int MAX = 1e4;
struct edge{
	int v, f, c;
	edge(){}
	edge(int _v, int _f, int _c){
		v = _v, f = _f, c = _c;
	}
};
vector<edge> edges; 
vector<int> G[MAX];
int tempo = 1, cor[MAX], pai[MAX],N,M; 
void add_edge(int u, int v, int cp, int rc){
	edges.push_back(edge(v, 0, cp));
	G[u].push_back(edges.size()-1);
	edges.push_back(edge(u, 0, rc));
	G[v].push_back(edges.size()-1);
} 
int dfs(int s, int t, int f){
	if(s == t) return f;
	cor[s] = tempo;
	for(int e : G[s])
	if(cor[edges[e].v] < tempo and edges[e].c-edges[e].f > 0)
		if(int a = dfs(edges[e].v, t, min(f, edges[e].c-edges[e].f))){
			edges[e].f += a;
			edges[e^1].f -= a;
			return a;
		}
	return 0;
}
int MaxFlow(int s, int t){
	int mf = 0;
	while(int a = dfs(s, t, inf))
		mf += a, tempo++;
	return mf;
}
int main(){
	int s=0,t=1000;// pontos de base para a passagem do fluxo
	REP(i,N)
		add_edge(s,i+1,1,0);//pontos de entrada
	REP(i,M)
		add_edge(i+N+1,t,1,0);//pontos de saida
	REP(i,N)
		REP(j,M)
			if(abs((A[i])-B[j])<=1){
				add_edge(i+1,j+N+1,1,0);//pontos intermediarios
			}
	cout << MaxFlow(s,t) << '\n';//Chamada da funcao 
}
