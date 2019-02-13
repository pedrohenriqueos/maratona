#include <bits/stdc++.h>
using namespace std;
#define MAXN 200010

long long int B[MAXN],C[MAXN];

int main(){
	long long int N;
	cin >> N;
	long long int A[N];
	for(int i=0;i<N;i++)
		cin >> A[i];
	long long int cont1=0,cont2=0;
	bool achou1=false,achou2=false;
	for(long long int i=0,j=N-1;i<N;i++,j--){
		if(A[i]!=0 and achou1){
			B[i]=cont1;
			cont1++;
		}
		if(A[i]==0){
			achou1=true;
			cont1=1;
		}
		if(A[j]!=0 and achou2){
			C[j]=cont2;
			cont2++;
		}
		if(A[j]==0){
			achou2=true;
			cont2=1;
		}			
	}
	for(long long int i=0;i<N;i++)
		cout << min(B[i],C[i]) << " ";
	cout << '\n';
}
