#include<bits/stdc++.h>
using namespace std;

int mdc(int a,int b){
	return (b==0)?a:mdc(b,a%b);
}

int main(){
	int N;
	cin >> N;
	int A[N];
	for(int n=0;n<N;n++)
		cin >> A[n];
	int aux = mdc(A[0],A[1]);
	for(int n=2;n<N;n++){
		aux = mdc(aux,A[n]);
	}
	cout << aux << '\n';
}
