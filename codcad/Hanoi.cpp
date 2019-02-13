#include<bits/stdc++.h>
using namespace std;

int hanoi(int discos){
	int aux=0;
	if(discos==1){
		return 1;
	}else
		return 1+2*hanoi(discos-1);
}

int main(){
	int T,c=1;
	while(cin >> T and T){
		cout << "Teste " << c++ << '\n';
		cout << hanoi(T) << "\n\n";
	}

}
