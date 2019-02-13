#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,quant=1;
	float A,r=0.0,v=0.0;
	string S;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> A;
		r+=A;
		cin.ignore();
		getline(cin,S);
		for(char c:S)
			if(c==32)
				quant++;
		cout << "day " << i+1 << ": " << quant << " kg\n";
		v+=quant;
		quant=1;
	}
	cout << fixed << setprecision(2) << v/N << " kg by day\n";
	cout << fixed << setprecision(2) << "R$ " << r/N << " by day\n";

}
