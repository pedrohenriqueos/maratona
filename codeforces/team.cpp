#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,quant=0;
	cin >> N;
	bool P,V,T;
	for(int i=0;i<N;i++){
		cin >> P >> V >> T; 
		if((P==V and P) or (P==T and P) or (V==T and V))
			quant++;
	}
	cout << quant << '\n';
}
