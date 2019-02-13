#include <bits/stdc++.h>
using namespace std;

int main(){
	string N;
	long long int S=0;
	cin >> N;
	for(char c:N){
	(c=='1') ? S+=1 : (c=='2') ? S+=2 : (c=='3') ? S+=3 : (c=='4') ? S+=4 :
	(c=='5') ? S+=5 : (c=='6') ? S+=6 : (c=='7') ? S+=7 : (c=='8') ? S+=8 :
	(c=='9') ? S+=9 : S+=0;
	}
	(N[N.size()-1]=='0' or N[N.size()-1]=='2' or N[N.size()-1]=='4' or N[N.size()-1]=='6' or N[N.size()-1]=='8') ? cout << "S\n" : cout << "N\n";
	(S%3==0) ? cout << "S\n" : cout << "N\n";
	(N[N.size()-1]=='0' or N[N.size()-1]=='5') ? cout << "S\n": cout << "N\n";
}
