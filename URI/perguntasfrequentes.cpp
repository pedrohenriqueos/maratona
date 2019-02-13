#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	while(cin >> N >> M){
		if(N==0 and M==0)
			break;
	int P[101],cont=0;
	memset(P,0,sizeof(P));
	for(int n=0;n<N;n++){
		int a;
		cin >> a;
		P[a]++;
	}
	for(int p=0;p<101;p++)
		if(P[p]>=M)
			cont++;
	cout << cont << '\n';
	}
}
