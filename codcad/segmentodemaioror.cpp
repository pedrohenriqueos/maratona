#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int A,max=0,soma=0;
	for(int n=0;n<N;n++){
		cin >> A;
		soma|=A;
	}
	cout << soma << '\n';
}
