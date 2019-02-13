#include<bits/stdc++.h>
using namespace std;
//testes -> in: 102201 -out: 2 | in: 112211 -out: 2
int main(){
	string str;
	cin >> str;
	int v=0,cont1=0,quant=0;
	for(int i=0;i<str.size();i++){
		if(((int)(str[i]-'0'))%3==0){
			cont1++,v=0;quant=0;
		}else{
			v+=(((int)(str[i]-'0'))%3);
			quant++;
			if(quant==3){
				v=0,cont1++;
				quant=0;
			}else if(v%3==0){
				v=0,cont1++;
				quant=0;
			}
		}
	}
	cout << cont1 << '\n';
}
