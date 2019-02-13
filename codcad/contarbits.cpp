#include<bits/stdc++.h>
using namespace std;

int conta_bit1(unsigned long long A){
	int i;
	for(i=0;A;i++){
		A&=(A-1);
	}
	return i;
}
int main(){
	unsigned long long N;
	cin >> N;
	cout << conta_bit1(N) << '\n';
}
