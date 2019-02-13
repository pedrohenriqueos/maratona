#include<bits/stdc++.h>
using namespace std;

int main(){
	int A,B;
	queue<char> fila;
	for(int i=0;i<=15;i++)
		fila.push((char)(65+i));
	
	for(int i=0;i<15;i++){
		cin >> A >> B;
		if(A>B){
			fila.push(fila.front());
			fila.pop();
			fila.pop();
		}else{
			fila.pop();
			fila.push(fila.front());
			fila.pop();
		}
	}
	cout << fila.front() << '\n';
}
