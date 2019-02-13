#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		string s;
		cin >> s;
		if(s.size()==3 and s[0]=='O' and s[1]=='B')
			s[2]='I';
		if(s.size()==3 and s[0]=='U' and s[1]=='R')
			s[2]='I';
		cout << s;
		if(N!=0)
			cout << " ";
	}
	cout << '\n';

}
