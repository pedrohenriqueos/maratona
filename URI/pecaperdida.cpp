#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,a;
	cin >> N;
	int som=(N*(N+1))/2;
	N--;
	while(N--){
		cin >> a;
		som-=a; 
	}
	cout << som << '\n';
}
