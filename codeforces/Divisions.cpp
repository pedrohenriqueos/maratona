#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> prime;//gerado por crivo
int N;
bitset<10000000> val;
bool isprime(int n){
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}
void crivo(){
	val[1]=1;
	for(int i=2;i<10000000;i++)
		if(!val[i]){
			prime.push_back(i);
			for(int j=2;j*i<10000000;j++)
				val[i*j]=1;
		}
}
long long countDivisors(long long n){
	long long ans = 1, p = prime[0];
	int idx = 1;
	while(p * p * p <= n){
		int cnt = 1;
		while(n % p == 0) n /= p, cnt++;
		ans *= cnt;
		p = prime[idx++];
	}
	if(n == 1) return ans;
	if(isprime(n)) ans *= 2;
	else{
		long long sq = sqrt(n);
		if(sq * sq == n) ans *= 3;
		else ans *= 4;
	}
	return ans;
}

main(){
	cin >> N;
	crivo();
	cout << countDivisors(N) << '\n';
}
