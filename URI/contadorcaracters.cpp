#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,saida="";
	while(getline(cin,s)){
		if(s=="0")
			break;
		vector<int> num;
		string str="";
		for(int i=0;i<s.size();i++){
			if(s[i]==' '){
				if(str.size()>=saida.size())
					saida=str;
				if(str.size()!=0)
					num.push_back(str.size());
				str="";
			}else if(i==s.size()-1){
				str+=s[i];
				if(str.size()>=saida.size())
					saida=str;
				if(str.size()!=0)
					num.push_back(str.size());
			}
			if(s[i]>='a' and s[i]<='z'){
				str+=s[i];
			}
		}
		for(int i=0;i<num.size();i++){
			if(i!=0)
				cout << "-";
			cout << num[i];
		}
		cout << '\n';
	}
	cout << '\n';
	cout << "The biggest word: " << saida << '\n';

}
