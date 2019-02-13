#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		if(i==0)
			cin.ignore();
		string S,A;
		getline(cin,S);
		for(int j=0;j<S.size();j++){
			if(j==0 and S[j]!=32)
				A+=S[j];
			if(S[j-1]==32 and S[j]!=32)
				A+=S[j];
		}
		cout << A << '\n';
	}

}
