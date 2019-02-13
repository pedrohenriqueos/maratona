//incompleta
#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	int Med[N][3];
	for(int i=0;i<N;i++)
		Med[i][0]=Med[i][1]=Med[i][2]=0;
	for(int i=0;i<M;i++){
		int A,D,C;
		cin >> A >> C >> D;
		Med[A-1][0]++;
		Med[C-1][1]++;
		Med[D-1][2]++;
	}
	int maiorO
	for(int i=0;i<N;i++){
		if(Med[i][0]>maiorO){
			maiorO=Med[i][0]
			L1=i+1;
		}
	}
}
