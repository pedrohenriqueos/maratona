#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	while(cin >> N >> M){
		if(N==0 and M==0)
			break;
		int D[M],A[N];
		bool flag=false;
		for(int i=0;i<N;i++)
			cin >> A[i];
		for(int i=0;i<M;i++)
			cin >> D[i];
		sort(D,D+M);
		sort(A,A+N);
		cout << ((A[0]<D[1])?"Y\n":"N\n");
	}
}
