#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	bool saida=false;
	cin >> S;
	for(char c: S){
		if(c=='H'){
			saida=true;
			break;
		}
		if(c=='Q'){
			saida=true;
			break;
		}
		if(c=='9'){
			saida=true;
			break;
		}
	}
	(saida) ? cout << "YES\n" : cout << "NO\n";
}
