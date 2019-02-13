#include<bits/stdc++.h>
using namespace std;
#define mo 1000000007
int main(){
	int A,B,C;
	cin >> A >> B >> C;
	int x=max(A,max(C,B));
	long long DP[x+1];
	memset(DP,0,sizeof(DP));
	DP[0]=DP[1]=1;
	for(int i=2;i<=x;i++)
		DP[i]=(DP[i-1]*i)%mo;
	int a=min(A,min(B,C));
	long long saida = DP[x]/(DP[a]*DP[A+B+C-x-a])%mo;
	cout << saida << '\n';
}
