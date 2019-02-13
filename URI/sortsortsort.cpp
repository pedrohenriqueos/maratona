#include <bits/stdc++.h>
using namespace std;
long long int N,M;
bool comp(long long int a,long long int b){
	return ((a%M==b%M) ? 
		((abs(a%2)==abs(b%2))?((abs(a%2)==1)? a>b: a<b):abs(a%2)>abs(b%2)) : a%M<b%M);  
}

int main(){
	while(cin >> N >> M){
		if(N==0 and M==0){
			cout << "0 0\n";
		 	break;
		}
		long long int A[N];
		for(int n=0;n<N;n++)
			cin >> A[n];
		sort(A,A+N,comp);
		cout << N << " " << M << '\n';
		for(int n=0;n<N;n++)
			cout << A[n] << '\n';
	}
}
