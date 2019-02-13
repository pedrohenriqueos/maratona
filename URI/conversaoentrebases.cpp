#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	for(int o=1;o<=T;o++){
		string str1,str2;
		cin >> str1 >> str2;
		cout << "Case " << o << ":\n";
		if(str2=="bin"){
			stringstream s;
			long long dec;
			s << str1;
			s >> dec;
			cout << dec << " dec\n";
			stringstream s2;
			long long num;
			s2 << str1;
			s2 >> num;
			stringstream s3;
			string saida;
			s3 << hex << num;
			s3 >> saida;
			for(char &c:saida)
				c=toupper(c);
			cout << saida << " hex\n";
		}else if(str2=="dec"){
			stringstream s2;
			long long num;
			s2 << str1;
			s2 >> num;
			while(num>0){
				cout << num%2;
				num/=2;
			}
			cout << " bin\n";
			stringstream s1;
			long long hex;
			s1 << str1;
			s1 >> hex;
			stringstream s0;
			string saida2;
			s0 << hex << num;
			s0 >> saida2;
			for(char &c:saida2)
				c=toupper(c);
			cout << saida2 << " hex\n";
		}else{
			stringstream s;
			long long dec;
			s << hex << str1;
			s >> dec;
			while(dec>0){
				cout << dec%2;
				dec/=2;
			}
			cout << " bin\n";
		}
		cout << '\n';
	}
}
