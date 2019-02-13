#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,K,saida=0;
	cin >> N >> M >> K;
	int A[M],F;
	for(int i=0;i<M;i++)
		cin >> A[i];
	cin >> F;
	for(int i=0;i<M;i++)
		if(__builtin_popcount(F^A[i])<=K)
			saida++;
	cout << saida << '\n';
}
