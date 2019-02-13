#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,cas=1;
	while(cin >> N){
	int A,p=0,f=0,m=0;
	string S;
		cin.ignore();
		getline(cin,S);
		for(int k=0;k<S.size();k+=2){
			if(k%5==0){
				A=((int)S[k]-48)*10+(int)S[k+1]-48;
				if(A==N)
					p++;
				k+=3;
			}
			if(k%5==3 and A==N){
				(S[k]=='F') ? f++ : m++;
			}
		}
		if(cas!=1)
			cout << '\n';
		cout << "Caso " << cas << ":\nPares Iguais: " << p << "\nF: " << f << "\nM: " << m << '\n';
	cas++;
	}
}
