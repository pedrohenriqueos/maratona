#include<bits/stdc++.h>
using namespace std;

#define int long long

inline bool check(int s){
	while(s%2==0)
		s/=2;
	while(s%3==0)
		s/=3;
	if(s==1) return true;
	return false;
}

main(){
	int N;
	scanf("%lld",&N);
	vector<int> A(N);
	int g;
	for(int i=0;i<N;i++){
		scanf("%lld",&A[i]);
		if(i==0) g=A[i];
		else g=__gcd(g,A[i]);
	}
	for(int i=0;i<N;i++){
		A[i]/=g;
		if(!check(A[i]))
			return !printf("No\n");
	}
	printf("Yes\n");
}
