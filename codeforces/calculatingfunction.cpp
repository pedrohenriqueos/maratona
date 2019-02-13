#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int N;
	cin >> N;
	(N%2==0) ? cout << N/2 << '\n' : cout << "-" <<((N+1)/2) << '\n';
}
