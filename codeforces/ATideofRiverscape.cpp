#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,p;
	cin >> N >> p;
	string str;
	cin >> str;
	int k=0,cont=0;
	for(int i=0;(i+p)<N;i++,k++){
		if(str[i]==str[i+p] and (str[i]=='1' or str[i]=='0')){
			cont++;
		}else if(str[i]==str[i+p]){
			str[i]='1',str[i+p]='0';
		}else if(str[i]=='1' and str[i+p]=='.'){
			str[i+p]='0';
		}else if(str[i]=='.' and str[i+p]=='1'){
			str[i]='0';
		}else if(str[i]=='0' and str[i+p]=='.'){
			str[i+p]='1';
		}else if(str[i]=='.' and str[i+p]=='0'){
			str[i]='1';
		}
	}
	if(cont==(N-p)){
		cout << "No\n";
	}else{
		for(;k<N;k++) if(str[k]=='.') str[k]='1';
		cout << str << '\n';
	}
}
