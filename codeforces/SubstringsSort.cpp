#include<bits/stdc++.h>

using namespace std;

bool ordem(string a,string b){
	return a.size()<b.size();
}
int main(){
	int N;
	cin >> N;
	vector<string> S(N);
	for(auto &str:S)
		cin >> str;
	sort(S.begin(),S.end(),ordem);
	for(int i=1;i<N;i++){
		if((int)S[i].find(S[i-1])<0){
			cout << "NO\n";
			return 0;
		}

	}
	cout << "YES\n";
	for(auto &str:S)
		cout << str << '\n';

}
