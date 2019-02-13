#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
		if(N==0)
			break;
		int A[N],aux[N];
		for(int i=0;i<N;i++){
			cin >> A[i];
			aux[i]=A[i];
		}
		sort(aux,aux+N);
		for(int i=0;i<N;i++){
			if(aux[N-2]==A[i]){
				cout << i+1 << '\n';
				break;
			}
		}
	}
}
