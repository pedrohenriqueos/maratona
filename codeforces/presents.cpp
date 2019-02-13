#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int A[N], B[N];
	for(int i=1;i<=N;i++){
		cin >> A[i-1];
		B[A[i-1]]=i;
	}
	for(int j=1;j<=N;j++)
		cout << B[j] << " ";
	cout << '\n';
}
