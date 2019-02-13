#include<bits/stdc++.h>
using namespace std;

int main(){
	string str1,str2;
	while(getline(cin,str1)){
		getline(cin,str2);
		string u1,u2;
		if(str1.size()>str2.size())
			u1=str1,u2=str2;
		else
			u1=str2,u2=str1;
		int saida=0;
		for(int i=0;i<u1.size();i++)
			for(int j=0;j<u2.size();j++){
				int cont=0,aux=i;
				for(int k=j;k<u2.size();k++){
					if(u1[aux]==u2[k]){
						cont++;
						aux++;
						continue;
					}
					break;
				}
				if(cont>saida)
						saida=cont;
			}
		cout << saida << '\n';
	}
}
