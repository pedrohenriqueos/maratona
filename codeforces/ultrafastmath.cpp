#include <bits/stdc++.h>
using namespace std;

int main(){
	string A,B,C;
	cin >> A;
	cin >> B;
	for(int i=0;i<A.size();i++){
		if((A[i]=='1' and B[i]=='1') or (A[i]=='0' and B[i]=='0'))
			C+=48;
		else
			C+=49;
	}
	cout << C << '\n';
}
