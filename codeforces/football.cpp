#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	int quant=1;
	char p;
	cin >> S;
	p=S[0];
	for(int i=1;i<S.size();i++){
		if(p==S[i])
			quant++;
		if(p!=S[i]){
			quant=1;
			p=S[i];
		}
		if(quant==7)
			break;
	}
	(quant==7) ? cout << "YES\n" : cout << "NO\n";
}
