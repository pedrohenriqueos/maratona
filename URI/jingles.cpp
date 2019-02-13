#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	while(cin >> S){
		if(S=="*")
			break;
		double n=0.0;
		int saida=0;
		for(char c:S){
			switch(c){
				case 'W':
					n+=1.0;
					break;
				case 'H':
					n+=(1.0/2.0);
					break;
				case 'Q':
					n+=(1.0/4.0);
					break;
				case 'E':
					n+=(1.0/8.0);
					break;
				case 'S':
					n+=(1.0/16.0);
					break;
				case 'T':
					n+=(1.0/32.0);
					break;
				case 'X':
					n+=(1.0/64.0);
					break;
				case '/':
					if(n==1.0)
						saida++;
					n=0.0;
					break;
			}
		}
		cout << saida << '\n';
	}

}
