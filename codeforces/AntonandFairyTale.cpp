#include<bits/stdc++.h>

using namespace std;

int main(){
	long long N,M,aux,i;
	cin >> N >> M;
	aux=N;
	for(i=M;aux>0;i++){
		aux=min(aux+M,N);
		aux-=i;
	}
	cout << i-1 << '\n';
}
