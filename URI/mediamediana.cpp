#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int A,B;
	while(cin >> A >> B){
		if(A==0 and B==0)
		 break;
		if(A>B)
			cout << B-(A-B) << '\n';
		else
			cout << A-(B-A) << '\n';
	}
}
