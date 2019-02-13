#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,quant=0;
	cin >> N;
	int X[N];
	for(int i=0;i<N;i++){
		cin >> X[i];
	}
	sort(X,X+N);
	for(int i=0;i<N;i++){
		quant++;
		if(X[i]!=X[i+1]){
			cout << X[i] << " aparece " << quant << " vez(es)\n";
			quant=0;
		} 
	}
}
