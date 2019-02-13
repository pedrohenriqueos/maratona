#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	bool saida=false,controlp=true,controlc=true,controlch=true,sai=false;
	int chave=0,coche=0,pare=0;
	cin >> N;
	for(int i=0;i<N;i++){
		string S;
		stack <char> pilha;
		cin >> S;
		for(char c:S)
			pilha.push(c);
	while(true){
		if(controlp and pilha.top()=='(')
			break;
		if(controlc and pilha.top()=='[')
			break;
		if(pilha.top()=='{' and controlch)
			break;
		switch(pilha.top()){
			case '{':
				chave--;
				pilha.pop();
				if(chave<0)
					sai=true;
				break;
			case '}':
				chave++;
				controlch=false;
				pilha.pop();
				break;
			case '[':
				coche--;
				pilha.pop();
				if(coche<0)
					sai=true;
				break;
			case ']':
				coche++;
				controlc=false;
				pilha.pop();
				break;
			case '(':
				pare--;
				pilha.pop();
				if(pare<0)
					sai=true;
				break;
			case ')':
				pare++;
				controlp=false;
				pilha.pop();
				break;
			
		}
		if(pilha.empty())
			break;
		if(sai)
			break;
	}
		if(chave==0 and coche==0 and pare==0 and (!controlc or !controlp or !controlch))
			saida=true;
	(sai) ? cout << "N\n" :
	(saida) ? cout << "S\n" : cout << "N\n";
	controlp=controlc=controlch=true;
	saida=sai=false;
	chave=coche=pare=0;
	}
}
