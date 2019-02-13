#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int DP[10];
	DP[0] = 1;
	DP[1] = 1;
	for(int i=2;i<=9;i++)
		DP[i]=DP[i-1]*i;
	int k=9,saida=0;
	while(N){
		if(DP[k]<=N){
			saida+=(N/DP[k]);
			N-=(DP[k]*(N/DP[k]));
		}
		k--;
	}
	cout << saida << '\n';
}
