#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin >> S;
	int n1=(S[0]-48),n2=(S[1]-48),n3=(S[2]-48),n4=(S[3]-48);
	int N = (S[0]-48)*1000 + (S[1]-48)*100 + (S[2]-48)*10 + (S[3]-48);
	while(true){
		N++;
		n1 = N/1000;
		int aux = N%1000;
		n2 = aux/100;
		aux %= 100;  
		n3 = aux/10;
		n4 = aux%10;
		if(n1!=n2 and n1!=n3 and n1!=n4 and n2!=n3 and n3!=n4 and n2!=n4)
			break;
	}
	cout << N << '\n';
}
