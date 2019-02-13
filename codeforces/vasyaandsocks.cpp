#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M,S;
	cin >> N >> M;
	int quant = N;
	S=N/M;
	quant+=(S);
	while(S>=M){
	S/=M;
	quant+=S;
	}
	if(quant%M==0)
		quant++;
	cout << quant << '\n';
}
