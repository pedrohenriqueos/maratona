#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int A[N],B[N-1];
	for(int i=0;i<N;i++)
		cin >> A[i];
	for(int i=0;i<(N-1);i++)
		cin >> B[i];
	sort(A,A+N);
	sort(B,B+(N-1));
	int C[N],a=0,b=0,c=0;
	for(int i=0;i<N;i++)
		C[i]=0;
	bool saida = false;
	if(A[a]==1){
		C[c]=A[a];
		a++;
		c++;
	}
	if(B[b]==1){
		C[c]=B[b];
		c++;
		b++;
	}
	for(int i=0;;i++){
		if(A[a]==C[c-1]+1){
			C[c]=A[a];
			a++;
			c++;
		}
		if(B[b]==C[c-1]+1){
			C[c]=B[b];
			c++;
			b++;
		}
		if(C[c]==N)
			break;
	}
	for(int i=0;i<N;i++)
		cout << C[i] << "|";
	for(int i=0;i<N;i++)
		if(C[i]==0)
			saida = true;
	(saida) ? cout << "Oh, my keyboard!\n" : cout << "I become the guy.\n";
}
