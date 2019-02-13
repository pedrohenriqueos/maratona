#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,a,b,saida=0;
	cin >> N >> M;
	priority_queue< pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> > > D;
	priority_queue<int, vector<int>, greater<int> > At;
	while(M--){
		scanf("%d %d",&a,&b);
		D.push(make_pair(a,b));
	}
	while(N--)
		At.push(0);
	while(!D.empty()){
		pair<int,int> pessoa = D.top();
		D.pop();
		int atendente = At.top();
		At.pop();
		int veri = max(atendente-pessoa.first,0);
		if(atendente-pessoa.first>20)
			saida++;
		if(veri==0)
			atendente=pessoa.second+pessoa.first;
		else
			atendente=atendente+pessoa.second;
		At.push(atendente);
	}
	cout << saida << '\n';
}
