#include <bits/stdc++.h>
using namespace std;

int main(){
	int A;
	cin >> A;
	for(int i=0;i<A;i++){
		int N;
		cin >> N;
		int quant=0;
		float soma=0,S[N];
		for(int j=0;j<N;j++){
			cin >> S[j];
			soma+=S[j];
		}
		soma/=N;
		for(int j=0;j<N;j++)
			if(S[j]>soma)
				quant++;
		float x = (quant*100.0)/N;
		cout << fixed << setprecision(3) << x << "%\n";
	}
}
