#include<bits/stdc++.h>
using namespace std;

int main(){
	unsigned long long int N,a,b,saida=0;
	cin >> N;
	while(N--){
		cin >> a >> b;
		unsigned long long int i=0;
		unsigned long long int aux=a;
		while(saida>=aux){
			aux=a+i*b;
			i++;
		}
		saida=aux;
	}	
	cout << saida << '\n';
}
