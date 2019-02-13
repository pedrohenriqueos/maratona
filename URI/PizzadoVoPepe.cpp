#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
int main(){
	int C,N;
	cin >> C >> N;
	vector<int> A(N);
	for(auto &a:A) cin >> a;
	int dist=inf;
	for(int i=1;i<N;i++)
		dist=min(dist,A[i]-A[i-1]);
	dist=min((C-A[N-1])+A[0],dist);
	if(N%dist==0)
		cout << "S\n";
	else cout << "N\n";
}
