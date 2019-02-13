#include<bits/stdc++.h>
using namespace std;


inline long long solve(vector<long long> &A){
	long long out=0;
	for(int i=1;i<A.size();i+=2)
		out+=(A[i]-A[i-1]);
	return out;
}
int main(){
	int N;
	long long M,a;
	scanf("%d %lld",&N,&M);
	vector<long long> A,pd1(N+2),pd(N+2);	
	A.push_back(0);
	for(int i=0;i<N;i++){
		scanf("%lld",&a);
		A.push_back(a); 
	}
	A.push_back(M);
	for(int i=1;i<(int)A.size();i++){
		if(i%2)
			pd1[i] = pd1[i-1];
		else
			pd1[i] = pd1[i-1] + (A[i]-A[i-1]);
	}
	for(int i=(int)A.size()-1;i>=1;i--){
		if(i%2)
			pd[i] = pd[i+1];
		else
			pd[i] = pd[i+1] + (A[i]-A[i-1]);
	}
	for(int i=0;i<(int)A.size();i++){
		int r=0;
		if()
	}
	cout << output << '\n';
}
