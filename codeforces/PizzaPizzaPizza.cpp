#include<bits/stdc++.h>
using namespace std;

int main(){
	long long A;
	cin >> A;
	if(A==0)
		cout << "0\n";
	else if((A+1)%2==0)
	cout << (A+1)/2 << '\n';
	else cout << (A+1) << '\n';
}
