#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	double soma=0,quant=0;
	cin >> S;
	for(int i=0;i<S.size();i++){
		if(S[i]>=50 and S[i]<=57){
			soma+=(S[i]-48);
			quant++;
		}
		else if(S[i]==49 and S[i+1]==48){
			soma+=10;
			quant++;
			i++;
		}else{ 
			soma++;
			quant++;
		}
	}
	cout << fixed << setprecision(2) << soma/quant << '\n';
}
