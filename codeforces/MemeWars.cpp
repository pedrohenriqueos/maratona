#include<bits/stdc++.h>

using namespace std;

void rec(string &s,char c){
	if(c=='a'){
		s+='a';
		return ;
	}
	rec(s,c-1);
	string aux=s;
	s+=c;
	s+=aux;

}
int main(){
	string s="";
	rec(s,'z');
	int N;
	cin >> N;
	cout << s[N-1] << '\n';
}
