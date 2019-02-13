#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N;
	map<string,string> S;
	while(N--){
		string str1,str2;
		cin >> str1;
		cin.ignore();
		getline(cin,str2);
		S[str1]=str2;
	}
	cin >> M;
	while(M--){
		string s1,s2;
		cin.ignore();
		getline(cin,s1);
		cin >> s2;
		cout << s1 << '\n' << S[s2] << "\n\n";
	}
}
