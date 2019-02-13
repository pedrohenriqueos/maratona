#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int A,B,i=0;
	cin >> A >> B;
	for(i=0;B>=A;i++){
		A*=3;
		B*=2;
	}
	cout << i << '\n';
}
