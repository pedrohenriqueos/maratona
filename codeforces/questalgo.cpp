#include<bits/stdc++.h>
using namespace std;

int main(){
	string S;
	int cont=0;
	cin >> S;
	(S.size()<3 and S.size()==2 and S[0]==S[1]) ? cout << "YES\n" : cout << "NO\n";
	if(S.size()>2){
	if(S.size()%2==0){
		for(int a=0,b=S.size()-1;a<S.size()/2;a++,b--)
			if(S[a]==S[b]) cont++;
		(cont)
	}else{
		for(int a=0,b=S.size()-1;a<((S.size()/2)-1);a++,b--)
			if(S[a]==S[b]) cont++;
	}
	}
}
