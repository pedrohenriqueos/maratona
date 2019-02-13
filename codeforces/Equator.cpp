#include<bits/stdc++.h>
using namespace std;

#define int long long
main(){
	int N,sum=0,parc=0;
	cin >> N;
	vector<int> A(N);
	for(auto &a:A) scanf("%lld",&a),sum+=a;
	for(int i=0;i<N;i++){
		parc+=A[i];
		if(2*parc>=sum)
			return !printf("%lld\n",i+1);
	}
}
