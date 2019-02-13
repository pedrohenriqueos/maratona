#include<bits/stdc++.h>
using namespace std;

int main(){
	int A,B,C;
	cin >> A >> B >> C;
	cout<< min(A*2+C*2,min(C*4+B*2,A*4+B*2)) << '\n';

}
