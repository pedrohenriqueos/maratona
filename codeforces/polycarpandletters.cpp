#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	string s;
	cin >> s;
	bool flag=true;
	int quant=0,saida=0;
	set<char> V;
	for(int i=0;i<s.size();i++){
		if(s[i]==toupper(s[i])){
			quant=0;
			V.clear();
			continue;
		}
		if(V.find(s[i])==V.end()){
			V.insert(s[i]);
			saida=max(saida,(int)V.size());
		}
	}
	cout << saida << '\n';
}
