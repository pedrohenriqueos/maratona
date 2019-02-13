#include<bits/stdc++.h>
using namespace std;

bool ordem(pair< string, pair< int,pair< int,float > > > a,pair< string,pair< int,pair< int,float > > > b){
	return ((a.second.first==b.second.first)?
			((a.second.second.first==b.second.second.first)?
			((a.second.second.second==b.second.second.second)?
			a.first>b.first:a.second.second.second<b.second.second.second)
			:a.second.second.first<b.second.second.first):a.second.first>b.second.first);
}
int main(){
	int T,N,M;
	cin >> T;
	for(int t=1;t<=T;t++){
		cin >> N >> M;
		vector< pair< string,pair< int,pair< int,float > > > > rena;
		while(N--){
			string nome;
			int peso,idade;
			float altura;
			cin >> nome >> peso >> idade >> altura;
			rena.push_back(make_pair(nome,make_pair(peso,make_pair(idade,altura))));
		}
		sort(rena.begin(),rena.end(),ordem);
		cout << "CENARIO {" << t << "}\n";
		for(int m=0;m<M;m++)
			cout << m+1 << " - " << rena[m].first << '\n';
	}
}
