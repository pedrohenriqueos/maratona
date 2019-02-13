#include<bits/stdc++.h>
using namespace std;

int main(){
	int S=0;
	string str;
	cin >> str;
	for(char c:str){
		(c=='0')?S+=0:(c=='1')?S+=1:(c=='2')?S+=2:(c=='3')?S+=3:	
		(c=='4')?S+=4:(c=='5')?S+=5:(c=='6')?S+=6:(c=='7')?S+=7:
		(c=='8')?S+=8:S+=9;
	}
	int fim;
	if(str.size()>=2)
		fim=(int)(str[str.size()-2]-'0')*10+(int)(str[str.size()-1]-'0');
	else
		fim=(int)(str[str.size()-1]-'0');
	cout << ((fim%4==0)?"S\n":"N\n");
	cout << ((S%9==0)?"S\n":"N\n");
	cout << ((fim%25==0)?"S\n":"N\n");
}
