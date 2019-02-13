#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int A[N];
	for(int i=0;i<N;i++)
		cin >> A[i];
	int saida=0;
	for(int i=1;i<N;i++){
		if(A[i]-A[i-1]<10)
			saida+=(A[i]-A[i-1]);
		else
			saida+=10;
	}
		saida+=10;
		cout << saida << '\n';
}
