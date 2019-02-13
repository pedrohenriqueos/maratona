#include <bits/stdc++.h>
using namespace std;

int main(){
	string S,A;
	bool s=true;
	cin >> S;
	cin >> A;
	if(S.size()==A.size()){
	for(int i=S.size()-1,a=0;i>=0;i--,a++){
		if(A[a]!=S[i]){
			s=false;
			break;
		}
	}
	}else
		s=false;
	(s) ? cout << "YES\n" : cout << "NO\n";
}
