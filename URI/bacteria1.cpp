#include<bits/stdc++.h>
using namespace std;

int main(){
	string str1,str2;
	while(cin >> str1 >> str2){
		bool saida=false;
		if(str1.size()>str2.size()){
		int j=0,ant=0;;
		for(int i=0;i<str1.size();i++){
			for(int j=i,k=0;k<str2.size();j++,k++){
				if(k==str2.size()-1 and str1[j]==str2[k]){
					saida=true;
					break;
				}
				if(str1[j]==str2[k])
					continue;
				break;
			}
			if(saida)
				break;			
		}
		}else if(str1==str2)
			saida=true;
		cout << ((saida)?"Resistente\n":"Nao resistente\n");
	}

}
