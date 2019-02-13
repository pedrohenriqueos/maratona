#include <bits/stdc++.h>
using namespace std;
long long int N,M;
bool verifica(long long int a,long long int b){
	return (a%M == b%M) ? a>b  : a%M>b%M;
}

int main(){
	cin >> N >> M;
	long long int A[N];
	for(int i=0;i<N;i++)
		cin >> A[i];
	sort(A,A+N,verifica);
	for(int i=0;i<N;i++){
		cout << A[i];
		if(i==N-1)
			cout << '\n';
		else
			cout << " ";
	}
}
