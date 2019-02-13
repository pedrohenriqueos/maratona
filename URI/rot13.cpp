#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	while(getline(cin,S)){
		for(char &c: S){
			if(c>=65 and c<=90){
				for(int a=0;a<13;a++){
					c++;
					if(c==91)
						c=65;
				}
			}
			if(c>=97 and c<=122){
				for(int a=0;a<13;a++){
					c++;
					if(c==123)
						c=97;
				}
			}
		}
		cout << S << '\n';
	}
}
