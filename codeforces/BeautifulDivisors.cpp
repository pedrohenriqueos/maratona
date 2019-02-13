#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,i=9,aux;
	cin >> N;
	aux=(((1<<i)-1)*(1<<i-1));
	while((N%aux)!=0){
		i--;
		aux=(((1<<i)-1)*(1<<i-1));
	}
	cout << aux << '\n';

}
