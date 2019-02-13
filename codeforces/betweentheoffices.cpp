#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,F=0,S=0;
	string str;
	cin >> N;
	cin >> str;
	char k=str[0];
	for(char c:str)
		if(c!=k){
			if(c=='F')
				F++;
			else
				S++;
			k=c;
		}
	cout << ((F>S)?"YES\n":"NO\n"); 
}
