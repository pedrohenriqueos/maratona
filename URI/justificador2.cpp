#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,cont=0;
	while(cin >> N){
		if(N==0)
			break;
		string S[N],A[N];
		cin.ignore();
		int maior=0;
		for(int i=0;i<N;i++){
			bool space=true;
			getline(cin,S[i]);
			for(int j=0;j<S[i].size();j++){
				if(S[i][j]==32 and !space and (S[i][j+1]!=32 and j+1!=S[i].size())){
					A[i]+=S[i][j];
					space = true;	
				}else if(S[i][j]!=32){
					A[i]+=S[i][j];
					space = false;
				}
			}
			if(A[i].size()>maior)
				maior = A[i].size();
		}
		if(cont!=0)
		cout << '\n';
		for(int i=0;i<N;i++){
		if(A[i].size()!=maior)
			for(int j=0;j<(maior-A[i].size());j++)
				cout << " ";
		cout << A[i] << '\n';
		}
		cont++;
	}
}
