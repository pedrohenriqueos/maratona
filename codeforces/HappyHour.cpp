#include<bits/stdc++.h>
using namespace std;


int K[100][15];
int main(){
	int N;
	cin >> N;
	vector<string> S(6,"");
	for(int i=0;i<N;i++){
		for(int j=0;j<6;j++){
			string s;
			cin >> s;
			for(auto &c:s)
				K[j][(int)c-'A']++;
		}
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<(int)('L'-'A'+1);j++){
			if(K[i][j]==N)
				S[i]+=(char)(j+'A');
		}
		if(i!=0) cout << " ";
		cout << S[i];
	}
	cout << '\n';
}




