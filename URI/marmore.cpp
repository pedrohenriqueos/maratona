#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,Q,cas=1;
	bool achou= false;
	while(cin >> N >> Q){
		if(N==0 and Q==0)
			break;
		int A[N],B[Q];
		for(int i=0;i<N;i++)
			cin >> A[i];
		for(int j=0;j<Q;j++)
			cin >> B[j];
		sort(A,A+N);
		cout << "CASE# " << cas << ":\n";
		for(int z=0;z<Q;z++){
		achou = false;
		for(int i=0;i<N;i++)
			if(A[i]==B[z]){
				cout << B[z] << " found at " << i+1 << '\n';
				achou=true;
				break;
			}
		if(!achou)
			cout << B[z] << " not found\n";
		}
		cas++;
	}
}
