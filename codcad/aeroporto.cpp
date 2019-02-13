#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,teste=1;
	while(cin >> N >> M and N and M){
	vector<int> G[N+1];
	int maior=0;
	while(M--){
		int a,b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
		if(G[a].size()>maior)
			maior = G[a].size();
		if(G[b].size()>maior)
			maior = G[b].size();
	}
	if(teste!=1)
		cout << '\n';
	cout << "Teste " << teste++ << '\n';
	for(int i=1;i<=N;i++)
		if(G[i].size()==maior)
			cout << i << " ";
	cout << '\n';
	}
}
