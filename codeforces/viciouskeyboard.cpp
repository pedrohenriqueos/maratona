#include<bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin >> S;
	int cont=0;
	bool v=false;
	for(int i=1;i<S.size();i++){
		if(S[i]==S[i-1] and !v and S[i]=='V'and (i+1<S.size() or i==S.size()-1)){
			v=true;
			cont++;
			S[i] = 'K'; 
			continue;
		}else if(S[i]!=S[i-1] and S[i-1]=='V')
			cont++;
	}
	cout << cont << '\n';
}
