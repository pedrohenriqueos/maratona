#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	vector<int> A(N);
	int aux=0;
	for(auto &a:A){
		cin >> a;
		cout << (a+aux)/M << " "; 
		aux=(a+aux)%M;
	}
}
