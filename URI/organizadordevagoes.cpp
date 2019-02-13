#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,A;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> A;
		int B[A];
		for(int j=0;j<A;j++)
			cin >> B[j];
		bool ordena = false;
		int cont=0;
		while(!ordena){
			ordena = true;
			for(int a=0;a<(A-1);a++)
				if(B[a]>B[a+1]){
					int aux = B[a];
					B[a] = B[a+1];
					B[a+1] = aux;
					ordena = false;
					cont++;
				}	
		}
		cout << "Optimal train swapping takes " << cont << " swaps.\n";
	}
}
