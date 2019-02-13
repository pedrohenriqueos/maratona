#include<bits/stdc++.h>
using namespace std;

class jogo{
	public:
		int marcados,sofridos;
};
bool ordem(jogo a,jogo b){
	return (double)a.marcados/a.sofridos>(double)b.marcados/b.sofridos;
}

int main(){
	int N,M;
	while(cin >> N >> M){
	int pontos=0;
	vector<jogo> A;
	for(int n=0;n<N;n++){
		int a,b;
		cin >> a >> b;
		if(a>b)
			ponto+=3;
		else{
			jogo J;
			J.marcados = a;
			J.sofridos = b;
			A.push_back(J);
		}			
	}
	sort(A.begin(),A.end(),ordem);
	for(int n=0;n<A.size();n++){
		int aux = M-(A[n].sofridos-A[n].marcados+1);
		if(aux>=0){
			M-=(A[n].sofridos-A[n].marcados+1);
			pontos+=3;
			A.erase(A.begin()+n);
			n--;
		}
		if(M==0)
			break;
	}
	for(int n=0;n<A.size();n++){
		int aux = M-(A[n].sofridos-A[n].marcados);
		if(aux>=0){
			M-=(A[n].sofridos-A[n].marcados);
			pontos++;
		}
		if(M==0)
			break;
	}
	cout << pontos << '\n';
	}
}
