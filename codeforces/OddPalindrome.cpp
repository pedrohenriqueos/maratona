#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin >> str;
	for(int i=0;i<(int)str.size();i++){
		for(int j=2;(j+i)<(int)str.size();j+=2){
			string s = str.substr(i,j);
			string s1 = s;
			reverse(s1.begin(),s1.end());
			if(s1==s)
				return puts("Or not.");
		}
	}
	puts("Odd.");
}
