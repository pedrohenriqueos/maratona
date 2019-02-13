#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	vector<int> A(N),B(M);
	for(auto &a:A) cin >> a;
	for(auto &b:B) cin >> b;
	int x=B[0],y=A[0];
	for(int i=1;i<(M-1);i++)
		x^=B[i];
	x^=A[N-1];
	for(int i=1;i<(N-1);i++)
		y^=A[i];
	if((y^x)==B[M-1]){
		cout << "YES\n";
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				if(i==(N-1) and j==(M-1))
					cout << x << " ";
				else if(j==(M-1))
					cout << A[i] << " ";
				else if(i==(N-1))
					cout << B[j] << " ";
				else
					cout << "0 ";
			}
			cout << '\n';
		}
		return 0;
	}
	cout << "NO\n";
}
