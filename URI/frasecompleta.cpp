#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int n=0;n<N;n++){
		cin.ignore();
		string S;
		int L[27]={0};
		int saida=0;
		getline(cin,S);
		for(int i=0;i<S.size();i++)
			L[S[i]-97]++;
		for(int i=0;i<27;i++)
			if(L[i]!=0)
				saida++;
		(saida==26) ? cout << "frase completa\n" : (saida>=13) ? cout << "frase quase completa\n" : cout << "frase mal elaborada\n";
	}
}
