#include<bits/stdc++.h>
using namespace std;

bool check(char c){
	if(c!='a' and c!='e' and c!='i' and c!='o' and c!='u' and c!='n')
		return true;
	return false;
}
bool check2(char c){
	if(c!='a' and c!='e' and c!='i' and c!='o' and c!='u')
		return true;
	return false;
}
int main(){
	string str;
	cin >> str;
	for(int i=0;i<str.size();i++){
		if(check(str[i])){
			if(i==(str.size()-1) or check2(str[i+1])){
				cout << "NO\n";
				return 0;
			}
		}
	}
	cout << "YES\n";
}
