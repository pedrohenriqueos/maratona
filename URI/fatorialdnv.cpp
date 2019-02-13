#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
		if(N==0)
			break;
		int a=1,soma=0;
		while(N>0){
			int aux=1;
			for(int i=1;i<=a;i++)
				aux*=i;
			soma += (N%10)*aux;
			N/=10;
			a++;
		}
		cout << soma << '\n';
	}
}
