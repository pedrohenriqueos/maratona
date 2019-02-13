#include<bits/stdc++.h>
using namespace std;

int A[102];
int main(){
	int N,M,a,saida=0;
	cin >> N >> M;
	for(int i=0;i<N;i++){
		cin >> a;
		A[a]++;
	}
	for(int i=0;i<=M;i++){
		if(A[i]==0 and i!=M){
			saida++;
		}else if(A[i]!=0 and i==M){
			saida++;
		}
	}
	cout << saida << '\n';
}
