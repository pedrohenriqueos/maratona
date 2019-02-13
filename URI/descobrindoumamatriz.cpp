#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int n=0;n<N;n++){
		int A;
		cin >> A;
		int M[A][A],linha[A],coluna[A];
		bool s=false;
		for(int i=0;i<A;i++){
			linha[i]=0;
			coluna[i]=0;
			for(int j=0;j<A;j++){	
				cin >> M[i][j];
				if(M[i][j]==1){
					coluna[j]++;
					linha[i]++;
				}
				if(coluna[j]==A)
					s=true;
			}
			if(linha[i]==A and i==A/2)
				s=true;
		}
		(s)? cout << "Potencia\n":cout << "Nao Potencia\n"; 
	}
}
