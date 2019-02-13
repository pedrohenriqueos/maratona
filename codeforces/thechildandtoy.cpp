#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M,a,b,saida=0;
	cin >> N >> M;
	int v[N+1];
	for(int i=1;i<=N;i++)
		cin >> v[i];
	for(int i=0;i<M;i++){
		cin >> a >> b;
		saida+=min(v[a],v[b]);
	}
	cout << saida << '\n';
}

