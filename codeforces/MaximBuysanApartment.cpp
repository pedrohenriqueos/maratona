#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	if(N==M or M==0)
		cout << "0 ";
	else
		cout << "1 ";
	cout << min(M*2,N-M);
}
