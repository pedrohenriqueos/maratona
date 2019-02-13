#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,saida=0;
	string S;
	char p;
	cin >> N;
	cin >> S;
	p=S[0];
	for(int i=1;i<S.size();i++)
		if(S[i]==p)
			saida++;
		else
			p=S[i];
	cout << saida << '\n';
}
