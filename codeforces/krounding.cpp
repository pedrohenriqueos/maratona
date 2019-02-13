#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int N,M;
	cin >> N >> M;
	long long int aux=N,cont=0;
	while(aux%10==0){
		aux/=10;
		cont++;
	}
	while(cont<M){
		while(aux%10==0){
			aux/=10;
			cont++;
		}
		if(cont==M)
			break;
		int num=aux%10;
		if(num==5){
			N*=2;
			aux*=2;
		}else{
			N*=5;
			aux*=5;
		}	
	}
		cout << N;
}
