#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	while(getline(cin,S)){
		int a=0;
		for(int i=0;i<S.size();i++){
			if(S[i]!=32){
				if(a%2==0){
					S[i]=toupper(S[i]);
					a++;
				}else{
					S[i]=tolower(S[i]);
					a++;
				}
			}
		}
		cout << S << '\n';
		a=0;
	}
}
