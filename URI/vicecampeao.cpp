#include<bits/stdc++.h>
using namespace std;

int main(){
	int mina=0x3f3f3f3f,maxa=0,A,S=0;
	for(int i=0;i<3;i++){
		cin >> A;
		S+=A;
		mina=min(mina,A);
		maxa=max(maxa,A);
	}
	cout << S-mina-maxa << '\n';
}
