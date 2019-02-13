#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	bool f=false;
	int save=0,cont=0,saida=0;
	for(int i=save;i<str.size();i++){
		if(str[i]=='a'){
			cont++;
			//cout << "case: 1\n";
		}else{
			save=i;
			break;
		}
	}
	while(true){
	for(int i=save;i<str.size();i++){
		if(str[i]=='b'){
			cont++;
			//cout << "case: 2\n";
		}else{
		save=i;
		break;
		}
	}
	int parc=0;
	for(int i=save;i<str.size();i++){
		if(str[i]=='a'){
			parc++;
			//cout << "case: 3\n";
		}else{
			cont=parc;
			save=i;
			break;
		}
	}
	if(save==str.size()-1){
		saida=max(saida,(parc+cont));
		break;
	}
	}
	cout << saida << '\n';
}
