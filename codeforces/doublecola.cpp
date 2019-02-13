#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	list<int> fila; 
	fila.push_back(1);
	fila.push_back(2);
	fila.push_back(3);
	fila.push_back(4);
	fila.push_back(5);
	cin >> N;
	for(int i=1;i<N;i++){
		fila.push_back(fila.front());
		fila.push_back(fila.front());
		fila.pop_front();
	}
	int a = fila.front();
	switch(a){
		case 1:
			cout << "Sheldon\n";
			break;
		case 2:
			cout << "Leonard\n";
			break;
		case 3:
			cout << "Penny\n";
			break;
		case 4:
			cout << "Rajesh\n";
			break;
		case 5:
			cout << "Howard\n";
			break;
	}
}
