#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	while(getline(cin,S)){
		if(S=="*")
			break;
		char c;
		bool saida=true;
		for(int i=0;i<S.size();i++){
			if(i==0){
				S[i]=tolower(S[i]);
				c=S[i];
			}
			if(S[i]==32 and tolower(S[i+1])!=c){
				saida = false;
				break;
			}
		}
		(saida) ? cout << "Y\n" : cout << "N\n";
	}
}
