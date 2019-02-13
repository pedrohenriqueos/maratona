#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int N,K;
	cin >> N >> K;
	long long int A[N],saida=0,cont=0;
	for(long long int i=0;i<N;i++){
		cin >> A[i];
		if(i==0)
			saida=A[i];
		else if(cont<K){
			if(A[i]>saida){
				cont=1;
				saida=A[i];
			}else{
				cont++;	
			}
		}
	}
	cout << saida;
}
