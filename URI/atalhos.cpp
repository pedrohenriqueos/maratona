#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	while(getline(cin,S)){
	int a=0,b=0;
	bool s;
	for(char c:S){
		s=true;
		switch(c){
			case '_':
				if(a%2==0)
					cout << "<i>";			
				else
					cout << "</i>";
				s=false;
				a++;
				break;
			case '*':
				if(b%2==0)
					cout << "<b>";			
				else
					cout << "</b>";
				s=false;
				b++;
				break;
	
		}
		if(s)
			cout << c;
	}
		cout << '\n';
	}
}
