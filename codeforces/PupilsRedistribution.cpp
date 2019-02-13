#include<bits/stdc++.h>
using namespace std;

int A[6],B[6];
int main(){
	int N,out=0;
	cin >> N;
	vector<int> C(N),D(N);
	for(auto &a:C)
		cin >> a,A[a]++;
	for(auto &b:D)
		cin >> b,B[b]++;
	for(int i=1;i<6;i++){
		if((A[i]+B[i])%2==1){
			cout << "-1\n";
			return 0;
		}
		out+=(((A[i]+B[i])/2)-min(A[i],B[i]));
	}
	cout << out/2 << '\n';
}
