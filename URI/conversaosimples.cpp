#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while(cin >> str){
		if(str[0]=='-') break;
		if(str[0]=='0' and str[1]=='x'){
			stringstream s;
			long long num;
			s << hex << str;
			s >> num;
			cout << dec << num << '\n'; 
		}else{
			stringstream s;
			long long num;
			s << str;
			s >> num;
			stringstream s2;
			string saida;
			s2 << hex << num;
			s2 >> saida;
			for(char &c:saida)
				c=toupper(c);
			cout << "0x" << saida << '\n';
		}
	}
}
