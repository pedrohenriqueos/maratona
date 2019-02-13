#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	while(cin >> N >> M){
		if(N==0 and M==0) break;
	vector<int> A;
	int B[N+1],a;
	memset(B,0,sizeof(B));
	while(M--){
		cin >> a;
		for(int i=0;i<A.size();i++)
			B[abs(A[i]-a)]++;
		A.push_back(a);
	}
	bool flag=true;
	for(int i=1;i<=N;i++)
		if(!B[i]){
			flag=false;
			break;
		}
	cout << ((flag)?"Y\n":"N\n");
	}
}
