#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	while(cin >> S){
		int quant=0;
		for(char c:S){
			switch(c){
				case '(':
					quant++;
					break;
				case ')':
					quant--;
					break;
			}
			if(quant<0)
				break;
		}
		(quant==0) ? cout << "correct\n" : cout << "incorrect\n";
	}
}
