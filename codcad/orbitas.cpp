#include <bits/stdc++.h>
using namespace std;

long long int mdc(long long int a,long long int b){
	return (b==0)?a:mdc(b,a%b);
}

int main(){
	long long int A,B;
	cin >> A >> B;
	cout << (A*B)/mdc(A,B) << '\n';
}
