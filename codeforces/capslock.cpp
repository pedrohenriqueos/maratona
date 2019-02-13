#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	int cont=0;
	cin >> S;
	if(S[0]==tolower(S[0])){
	for(int i=1;i<S.size();i++)
		if(S[i]==toupper(S[i]))
			cont++;
	if(cont==S.size()-1){
		S[0]=toupper(S[0]);
		for(int i=1;i<S.size();i++)
			S[i]=tolower(S[i]);
	cout << S << '\n';
	}else if(cont>=0){
	cout << S << '\n';
	}else{
		for(int i=0;i<S.size();i++)
			S[i]=tolower(S[i]);
		cout << S << '\n';
	}
	}else{
		for(int i=1;i<S.size();i++)
		if(S[i]==toupper(S[i]))
			cont++;
	if(cont==S.size()-1){
		for(int i=0;i<S.size();i++)
			S[i]=tolower(S[i]);
	cout << S << '\n';	
	}else
		cout << S << '\n';
	}
}
