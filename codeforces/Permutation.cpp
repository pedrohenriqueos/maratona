#include<bits/stdc++.h>

using namespace std;

int V[5002];
int main(){
	int N;
	cin >> N;
	int A[N],cont=0;
	for(int i=0;i<N;i++){
		cin >> A[i];
		V[A[i]]++;
	}
	for(int i=1;i<=N;i++)
		if(!V[i]) cont++;
	cout << cont << '\n';
}
