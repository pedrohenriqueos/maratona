#include <bits/stdc++.h>
using namespace std;

int J[101];

int main(){
	int A,cont=0;
	for(int i=0;i<6;i++){
		cin >> A;
		J[A]++;
	}
	for(int i=0;i<6;i++){
		cin >> A;
		if(J[A]!=0)
			cont++;
	}
	cout << ((cont==6) ? "sena\n":((cont==5) ? "quina\n":
			((cont==4) ? "quadra\n":((cont==3) ? "terno\n":"azar\n"))));
}
