#include <bits/stdc++.h>
using namespace std;

int main(){
	double N,M,A;
	long long int s=0;
	cin >> N >> M >> A;
	s+= (N/A==tolower(N/A)) ? (long long int)N/A : (long long int)(N/A)+1;
	s*= (M/A==tolower(M/A)) ? (long long int)M/A : (long long int)(M/A)+1;
	cout << s << '\n';
}
