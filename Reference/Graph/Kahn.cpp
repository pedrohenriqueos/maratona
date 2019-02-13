vector<int> G[50002];
int grau[50002];
int main(){
	int N,M;
	cin >> N >> M;
	while(M--){
		int a,b;
		cin >> a >> b;
		G[a].push_back(b);
		grau[b]++;
	}
	vector<int> ts;
	set<int> S;
	for(int i=0;i<N;i++)
		if(!grau[i]) S.insert(i);
	int b=0;
	while(!S.empty()){ //Prioriza os menores valores
		int a=*S.begin();
		ts.push_back(a);
		S.erase(S.begin());
		for(auto &u:G[a]){
			grau[u]--;
			if(!grau[u])
				S.insert(u);
		}
	}
	if((int)ts.size()<N){
		cout << "*\n";
	}else{
		for(int i=0;i<ts.size();i++)
			cout << ts[i] << '\n';
	}
}
