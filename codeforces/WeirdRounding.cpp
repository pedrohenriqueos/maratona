#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	int k,cont=0,out=0;
	cin >> str >> k;
	
	for(int i=str.size()-1;i>=0;i--){
		if(cont==k) break;
		if(str[i]=='0'){
			cont++;
			continue;
		}
		out++;
	}
	if(cont==k){
		cout << out << '\n';
	}else{
		cout << str.size()-1 << '\n';
	}
}
