#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,K;
	cin >> N >> K;
	int A[N],saida=N;
	bool flag=false;
	for(int i=0;i<N;i++){
		cin >> A[i];
		int aux=86400-A[i];
		K-=aux;
		if(K<=0 and !flag)
			flag=true,saida=i+1;
	}
	cout << saida;
}
