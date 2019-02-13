#include<bits/stdc++.h>
using namespace std;
bool comp(long long int a,long long int b){
	return a>b;
}

int main(){
	long long int N;
	cin >> N;
	long long int A[N];
	for(long long int i=0;i<N;i++)
		cin >> A[i];
	sort(A,A+N,comp);
	for(long long int i=0;i<N;i++)
		cout << A[i] << " ";
	cout << '\n';
}
