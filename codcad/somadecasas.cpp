#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int N,soma;
	cin >> N;
	long long int A[N];
	for(int n=0;n<N;n++)
		scanf("%lld",&A[n]);
	cin >> soma;
	int i=0,j=N-1;
	while(A[i]+A[j]!=soma){
		if(A[i]+A[j]>soma)
			j--;
		else if(A[i]+A[j]<soma)
			i++;
	}
	cout << A[i] << " " << A[j] << '\n';
}
