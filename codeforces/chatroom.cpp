#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	bool h=false,e=false,l1=false,l2=false,o=false,cont=false;
	cin >> S;
	for(int i=0;i<S.size();i++){
		if(S[i]=='h')
			h=true;
		if(h and S[i]=='e')
			e=true;
		if(e and S[i]=='l'){
			l1=true;
			if(!cont){
			cont=true;
			continue;
			}
		}
		if(l1 and S[i]=='l')
			l2=true;
		if(l2 and S[i]=='o'){
			o=true;
			break;
		}	
	}
	(o) ? cout << "YES\n" : cout << "NO\n";
}
