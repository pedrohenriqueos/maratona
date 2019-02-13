#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,s1,str;
	while(cin >> s >> s1){
		cin.ignore();
		getline(cin,str);
		string out="";
		bool flag=false;
		for(int i=0;i<(int)str.size();i++){
			if(flag){
				if(tolower(str[i])==tolower(s[0])){
					int aux =i,j=0;
					while(aux<(int)str.size() and j<(int)s.size() and tolower(str[aux])==tolower(s[j]))
						j++,aux++;
					if(j==(int)s.size()){
						for(int k=0;k<(int)s1.size();k++)
							out+=s1[k];
						i+=j-1;
						continue;
					}
				}else if(str[i]=='>')
					flag=false;
			}else if(str[i]=='<')
				flag=true;
			out+=str[i];
		}
		cout << out << '\n';
	}
}
