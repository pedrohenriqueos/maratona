#include<bits/stdc++.h>
using namespace std;

int main(){
	int T,q=0;
	bool saida=true;
	stack<char> p;
	cin >> T;
	while(T--){
	if(q==0)
		cin.ignore();
	q++;	
	string s;
	getline(cin,s);
		for(char c:s){
			if(c=='{')
				p.push('{');
			else if(c=='}'){
				if(p.empty()){
					saida=false;
					break;
				}else
					p.pop();
			}
		}
	}
	if(!p.empty())
		saida=false;
	cout << ((saida)?"S\n":"N\n");
	 	
}
