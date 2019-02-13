#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,out=0;
	cin >> N >> M;
	vector<int> A(N),B(N),U(N);
	vector< pair<int,int> > C(N);
	for(auto &a:A)
		cin >> a;
	for(int i=0;i<N;i++){
		cin >> B[i];
		C[i].first=A[i]-B[i];
		C[i].second=i;
	}
	sort(C.begin(),C.end());
	for(int i=0;i<M;i++){
		//cout << A[C[i].second] << " ";
		out+=A[C[i].second];
		U[C[i].second]=1;
	}
	int k=M;
	while(C[k].first<0){
		out+=A[C[k].second];
		U[C[k++].second]=1;
	}
	for(int i=0;i<N;i++){
		if(!U[i]){
			//cout << B[i] << " ";
			out+=B[i];
		}
	}
	cout << out << '\n';
}
