#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,A;
	string S;
	cin >> N >> A;
	cin >> S;
	for(int a=0;a<A;a++)
	for(int i=0;i<N;i++)
		if(S[i]=='B' and S[i+1]=='G'){
			char c = S[i];
			S[i]=S[i+1];
			S[i+1]=c;
			i++;
		}
	cout << S << '\n';
	

}
