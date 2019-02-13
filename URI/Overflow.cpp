#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N,A,B;
	char c;
	cin >> N;
	cin >> A >> c >> B;
	if(c=='*')
		A*=B;
	else 
		A+=B;
	cout << ((A<0 or A>N)?"OVERFLOW\n":"OK\n");
}
