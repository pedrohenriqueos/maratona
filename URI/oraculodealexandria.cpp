#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int n=0;n<N;n++){
	string S;
	long long int A=0,fat=1,cont=0;
	int a=0;
	cin >> S;
		for(int i=0;i<S.size();i++){
			if(S[i]=='!'){
				cont++;
				continue;
			}
			if(a==0){
				A+=((int)S[i]-48);
				a++;
			}else
				A=A*10+(((int)S[i])-48);	
		}
		for(int i=0;(A-i*cont)>1;i++){
			fat*=(A-i*cont);
			if((A-i*cont)==2)
				break;
		}
		cout << fat << '\n';
	}
}
