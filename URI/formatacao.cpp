#include <bits/stdc++.h>
using namespace std;

int main(){
	string S,C;
	while(cin >> S){
		cin >> C;
		cout << "$";
		unsigned long long int a=1;
		for(char c:S){
			if(S.size()%3==0){
				cout << c;
			 if(a>=3 and a%3==0 and a-S.size()!=0)	
				cout << ",";
			}
			if(S.size()%3==1){
				cout << c;
			 if(a>=1 and a%3==1 and a-S.size()!=0)	
				cout << ",";
			}
			if(S.size()%3==2){
				cout << c;
			 if(a>=2 and a%3==2 and a-S.size()!=0)	
				cout << ",";
			}
		a++;
		}
		cout << ".";
		if(C.size()==2)
			cout << C << '\n';
		else
			cout << "0" << C << '\n';
	}
}
