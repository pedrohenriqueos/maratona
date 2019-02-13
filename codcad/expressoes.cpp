#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	cin.ignore();
	while(T--){
		string str;
		getline(cin,str);
		stack<char> pilha;
		bool flag=true;
		for(char c:str){
			if(c=='(')
				pilha.push(c);
			else if(c==')'){
				if(pilha.empty()){
					flag=false;
					break;
				}
				char k=pilha.top();
				pilha.pop();
				if(k!='('){
					flag=false;
					break;
				}
			}else if(c=='['){
				pilha.push(c);
			}else if(c==']'){
				if(pilha.empty()){
					flag=false;
					break;
				}
				char k=pilha.top();
				pilha.pop();
				if(k!='['){
					flag=false;
					break;
				}
			}else if(c=='{'){
				pilha.push(c);
			}else if(c=='}'){
				if(pilha.empty()){
					flag=false;
					break;
				}
				char k=pilha.top();
				pilha.pop();
				if(k!='{'){
					flag=false;
					break;
				}
			}
		}
		if(!pilha.empty())
			flag=false;
		cout << ((flag)?"S\n":"N\n");
	}
}
