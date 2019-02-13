#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	long long int N,mod=10000000001,cont=0;
	cin >> N;
	long long int A[N];
	for(int n=0;n<N;n++)
		cin >> A[n];
	for(int i=0;i<N-1;i++)
		for(int j=i+1;j<N;j++){
			long long int M = (A[i]-A[j]>0) ? A[i]-A[j] : -(A[i]-A[j]);
			if(M==mod){
				cont++;
				continue;
			}	
		 	if(M<mod){	
				mod=M;
				cont=0;
			}
		}
	cout << mod << " " << cont << '\n';
}
