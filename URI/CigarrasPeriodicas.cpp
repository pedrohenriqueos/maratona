#include<bits/stdc++.h>

using namespace std;

#define int long long
int N,L;
int lcm(int a,int b){
	return ((a*b)/__gcd(a,b));
}
main(){
	scanf("%lld %lld",&N,&L);
	vector<int> A(N);
	int esc=1,out=1;
	for(auto &a:A) scanf("%lld",&a),esc=lcm(esc,a);
	int veri=esc;
	for(int i=2;i<=L;i++){
		int cv = lcm(veri,i);
		if(cv>esc and cv<=L){
			out=i;
			esc = cv;
		}
	}
	printf("%lld\n",out);
}
