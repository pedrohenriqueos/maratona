#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int N;
	cin >> N;
	long long int A[N],S[N];
	long long int D=1,maxa=0;
	for(int i=2;i<=N;i++)
		D*=i;
	D--;
	memset(S,0,sizeof(S));
	while(D--)
	for(int i=0;i<N;i++){
		cin >> A[i];
		S[i]+=A[i];
		maxa=max(maxa,S[i]+1);
	}
	for(int i=0;i<N;i++){
		if(i!=0)
			cout << " ";
		cout << maxa-S[i];
	}
	cout << '\n';
}
