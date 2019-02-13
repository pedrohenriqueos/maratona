#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,cas=1;
	cin >> N;
	for(int i=0;i<N;i++){
	int M;
	cin >> M;
	int S[M];
	for(int j=0;j<M;j++)
		cin >> S[j];
	sort(S,S+M);
	cout << "Case " << cas << ": " << ((M%2==0) ? S[(M-1)/2] : S[M/2]) << '\n'; 
	cas++;
	}
}
