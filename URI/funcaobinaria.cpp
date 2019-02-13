#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int n=0;n<N;n++){
		long long int A;
		int cont=0;
		cin >> A;
		while(A){
			A = A & (A-1);
			cont++;		
		}
		cout << cont << '\n';
	}
}
