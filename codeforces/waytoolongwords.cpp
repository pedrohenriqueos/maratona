#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		string S;
		cin >> S;
		(S.size()<=10) ? cout << S << '\n' : cout << S[0] << S.size()-2 << S[S.size()-1] << '\n';

	}

}
