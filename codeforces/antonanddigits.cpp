#include<bits/stdc++.h>
using namespace std;

int main(){
	int K2,K3,K5,K6,saida=0;
	cin >> K2 >> K3 >> K5 >> K6;
	int k=min(min(K2,K5),K6);
	K2-=k;
	int x=min(K2,K3);
	saida+=((k*256)+(x*32));
	cout << saida << '\n';
}
