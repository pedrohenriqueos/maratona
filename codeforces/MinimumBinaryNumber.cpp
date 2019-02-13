#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,cont1=0,cont2=0;
	cin >> N;
	string str;
	cin >> str;
	for(auto &c:str)
		if(c=='0') cont1++;
		else cont2++;
	if(cont2){
		cout << "1";
		while(cont1--) cout << "0";
		cout << '\n';
	}else{
		cout << "0\n";
	}
}
