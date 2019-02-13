//Minimum edge cover == Maximum Cardinality Bipartite Matching == MVC
//MIS(Maximum Independent Set)+MVC(max matching) = N(nós)
bool kuhn(int u)//max matching
{
	if(cor[u] == tempo)
		return 0;
	cor[u] = tempo;
	//random_shuffle(G[u].begin(), G[u].end(), [](int x){ return rand() % x; });
	for(const int &v : G[u])
		if(!b[v] or kuhn(b[v]))
			return b[v] = u;
	return 0;
}
int main(){
	tempo = 1;
	int ans = 0;
	for(int i = 1; i <= na; i++)
		ans += kuhn(i), tempo++;
}
