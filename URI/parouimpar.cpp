#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,cas=1;
	while(cin >> N and N){
		int a,b;
		string par,impar;
		cin >> par >> impar;
		cout << "Teste " << cas++ << '\n';
		while(N--){
			cin >> a >> b;
			if((a+b)%2==0)
				cout << par << '\n';
			else
				cout << impar << '\n';
		}
		cout << '\n';
	}
}
