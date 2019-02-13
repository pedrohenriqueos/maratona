#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,a;
	cin >> N;
	int ant=0,cont=1,saida=0;
	for(int i=0;i<N;i++){
		cin >> a;
		if(i==0){
			ant=a;
		}else if(ant==a){
			cont++;
		}else{
			ant=a;
			if(saida<cont)
				saida=cont;
			cont=1;
		}
	}
	if(saida<cont)
		saida = cont;
	cout << saida << '\n';
}
