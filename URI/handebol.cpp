#include <bits/stdc++.h>
using namespace std;

int main(){
	int M,N,s=0;
	cin >> N >> M;
	int A[N][M],aux;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(j==0)
			aux=0;
			cin >> A[i][j];
			if(A[i][j]>0)
				aux++;
			if(aux==M) 
				s++;
		}
	}
	cout << s << '\n';
}
