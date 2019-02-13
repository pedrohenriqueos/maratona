#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int N;
	while(cin >> N){
		if(N==0) break;
		cout << "Brasil " << N/90 << " x Alemanha " << ceil((double)(N*7)/90) << '\n';
	}
}
