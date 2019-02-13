#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	while(cin >> N >> M){
		int A[10],saida=0;
		for(int i=N;i<=M;i++){
			memset(A,0,sizeof(A));
			int aux=i;
			while(aux>0){
				A[aux%10]++;
				aux/=10;
			}
			bool c=true;
			for(int k=0;k<10;k++)
				if(A[k]>1){
					c=false;
					break;
				}
			if(c)
				saida++;
		}
		cout << saida << '\n';
	}
}
