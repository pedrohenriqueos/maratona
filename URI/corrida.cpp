#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	long long int soma[N],A;
	for(int k=0;k<N;k++)
		soma[k]=0;
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++){
			cin >> A;
			soma[i]+=A;
		}
	int cont=0;
	while(cont!=3){
	long long int menor=1000000000000;
	int indice=0;
	for(int i=0;i<N;i++)
		if(soma[i]<menor){
			menor=soma[i];
			indice=i;
		}
	cout << indice+1 << '\n';
	soma[indice]=1000000000000;
	cont++;
	}

}
