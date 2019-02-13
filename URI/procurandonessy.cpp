#include <bits/stdc++.h>
using namespace std;

int main(){
int N;
	cin >> N;
	for(int i=0;i<N;i++){
		int A,B;
		cin >> A >> B;
		A -= (A%3==2) ? 2 : ((A%3==1) ? 1 : 0);
		B -= (B%3==2) ? 2 : ((B%3==1) ? 1 : 0);
		cout << (A*B)/9 << '\n';
	}
}
