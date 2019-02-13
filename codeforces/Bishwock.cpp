#include<bits/stdc++.h>
using namespace std;

int main(){
	int quant=0,parc1=0,parc2=0;
	string str1,str2;
	cin >> str1 >> str2;
	for(int i=1;i<str1.size();i++){
		quant=(str1[i]=='0')+(str2[i]=='0');
		if(quant==1 or quant==2){
			parc1++;
			i++;
		}
	}
	for(int i=0;i<str1.size();i++){
		quant=(str1[i]=='0')+(str2[i]=='0');
		if(quant==1 or quant==2){
			parc2++;
			i++;
		}
	}
	cout << max(parc1,parc2) << '\n';
}
