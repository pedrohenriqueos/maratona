#include<bits/stdc++.h>

using namespace std;

int main(){
	int N; 
	long long d;
	cin >> N >> d;
	vector<long long> A(N);
	for(auto &a:A) cin >> a;
	set<long long> S;
	for(int i=0;i<N;i++){
		if((i+1)<N and (A[i]+d)<=(A[i+1]-d))
			S.insert(A[i]+d);
		if(i>0 and (A[i]-d)>=(A[i-1]+d))
			S.insert(A[i]-d);
	}
	cout << S.size()+2 << '\n';
}
