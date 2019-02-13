#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin >> S;
	bool s=true;
	int quant=0;
	for(int i=0,j=S.size()-1;i<(S.size())/2;i++,j--){
		if(S[i]!=S[j]){
			quant++;
			
		}
		if(quant==2){
			s=false;
			break;
		}
	}
	if(S.size()%2==1 and quant==0) quant++;
	(s and quant==1)? cout << "YES\n" : cout << "NO\n";
}
