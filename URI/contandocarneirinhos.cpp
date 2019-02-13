#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int a=0;a<N;a++){
		int A;
		cin >> A;
		int S[A];
		for(int i=0;i<A;i++)
			cin >> S[i];
		sort(S,S+A);
		int f=S[0],quant=1;
		for(int i=1;i<A;i++)
			if(f!=S[i]){
				quant++;
				f=S[i];
			}
		cout << quant << '\n';
	}
}
