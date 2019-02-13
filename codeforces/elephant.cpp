#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,saida=0;
	cin >> N;
	saida+=N/5;
	N-=(saida*5);
	if(N!=0)
		saida++;
	cout << saida << '\n';
}
