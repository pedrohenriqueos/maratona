#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	double out=0.0;
	cin >> N >> M;
	double A[N+1],S[N+1];
	S[0]=0.0;
	for(int i=1;i<=N;i++)
		cin >> A[i],S[i]=S[i-1]+A[i];
	for(int i=M;i<=N;i++)
		for(int j=i;j<=N;j++)
			out=max(out,(double)((double)(S[j]-S[i-M])/(double)(j-(i-M))));
	cout <<fixed << setprecision(8) << out << '\n';
}
