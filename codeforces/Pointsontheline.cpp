#include<bits/stdc++.h>

using namespace std;

int main(){
	int N,M,out=0;
	cin >> N >> M;
	vector<int> A(N);
	for(auto &a:A) cin >> a;
	sort(A.begin(),A.end());
	for(int i=0;i<N;i++)
		for(int j=i;j<N;j++)
			if((A[j]-A[i])<=M)
				out=max(out,j-i+1);
	cout << N-out << '\n';
}
