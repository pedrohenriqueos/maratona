#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int N,K,M;
	cin >> N >> K >> M;
	long long int A[N+1],DP[K+1];
	for(long long int i=1;i<=N;i++)
		cin >> A[i];
	for(long long int i=1;i<=N;i++)
		cin >> DP[i];
	for(long long int j=N+1;j<=K;j++){
		for(long long int i=1;i<=N;i++){
			if(i==1){
				DP[j] = (A[i]*DP[j-i]);
				continue;
			}
			DP[j] += (A[i]*DP[j-i]);
		}
		DP[j]=DP[j]%M;
	}
	cout << DP[K]%M << '\n';
}
