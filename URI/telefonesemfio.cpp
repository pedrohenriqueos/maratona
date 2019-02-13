#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	cin.ignore();
	for(int o=1;o<=T;o++){
		string ok,str1,str2;
		bool tim1=false,tim2=false;
		getline(cin,ok);
		getline(cin,str1);
		getline(cin,str2);
		int i=0,cont1=0,cont2=0;	
		for(char c:ok){
			if(tolower(c)==tolower(str1[i]))
				cont1++;
			if(tolower(c)==tolower(str2[i]))
				cont2++;
			if(cont1<cont2 and !tim2 and !tim1)
				tim2=true;
			if(cont2<cont1 and !tim2 and !tim1)
				tim1=true;
			i++;
		}
		cout << "Instancia " << o << '\n';
		if(!tim1 and !tim2)
			cout << "empate\n\n";
		else if(tim1)
			cout << "time 1\n\n";
		else 
			cout << "time 2\n\n";			
	}
}
