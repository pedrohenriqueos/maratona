#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	while(getline(cin,S)){
		char c,a;
		bool al=true;
		int quant=0;
		for(int i=0;i<S.size();i++){	
			if(i==0)
				c=tolower(S[i]);
			else if(S[i]==32){
				if(S[i+1]==c and al){
					quant++;
					a=c;
					al=false;
				}else{
					c=tolower(S[i+1]);
					if(a!=c)
						al=true;
				}
			}
		}
		cout << quant << '\n';
	}
}
