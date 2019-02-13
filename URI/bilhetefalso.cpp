#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	while(cin >> N >> M){
	if(N==0 and M==0)
		break;
	int S[M],quant=0;
	for(int i=0;i<M;i++)
		cin >> S[i];
	sort(S,S+M);
	int ult=0;
	for(int i=0;i<M-1;i++)
		if(S[i]==S[i+1] and S[i]!=ult){
			quant++;
			ult=S[i];
		}
	cout << quant << '\n';
	}
}
