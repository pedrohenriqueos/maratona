#include<bits/stdc++.h>
using namespace std;

class Pais{
	public:
		int ouro=0,prata=0,bronze=0,indice=0;
};

bool ordem(Pais a,Pais b){
	return (a.ouro!=b.ouro)?a.ouro>b.ouro:((a.prata!=b.prata)?a.prata>b.prata:((a.bronze!=b.bronze)?a.bronze>b.bronze:a.indice<b.indice));
}

int main(){
	int N,M,o,p,b;
	cin >> N >> M;
	Pais A[N];
	for(int n=0;n<N;n++)
		A[n].indice=n+1;
	for(int m=0;m<M;m++){
		cin >> o >> p >> b;
		A[o-1].ouro++;
		A[p-1].prata++;
		A[b-1].bronze++;
	}
	sort(A,A+N,ordem);
	for(int n=0;n<N;n++)
		cout << A[n].indice << " ";
	cout << '\n';
}
