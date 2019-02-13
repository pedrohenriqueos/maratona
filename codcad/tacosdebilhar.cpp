#include<bits/stdc++.h>
using namespace std;
int D[1000001];
int main(){
	int N,a,cont=0;
	cin >> N;
	for(int n=0;n<N;n++){
		cin >> a;
		D[a]++;
		if(D[a]==2)
			D[a]=0;
		if(D[a]==1)
			cont++;
	}
	cout << cont*2 << '\n';

}
