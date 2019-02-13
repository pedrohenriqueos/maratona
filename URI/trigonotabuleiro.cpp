#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
	int A;
	cin >> A;
	unsigned long long int x = pow(2,A-1);
	x += (x-1);
	x/=12000;
	cout << x << " kg\n";
	}
}
