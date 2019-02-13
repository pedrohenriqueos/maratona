#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,s=0;
	cin >> N;
	for(int i=0;i<N;i++){
		string S;
		cin >> S;
		if(S[1]=='+')
			s++;
		if(S[1]=='-')
			s--;
	}
	cout << s << '\n';
}
