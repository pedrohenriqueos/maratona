#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
	int A,soma=0;
	for(int i=0;i<N;i++)
		cin >> A,soma+=A;
	if((soma>=(2*N)) and (soma%N==0))
		cout << "possivel\n";
	else	
		cout << "impossivel\n";
	}
}
