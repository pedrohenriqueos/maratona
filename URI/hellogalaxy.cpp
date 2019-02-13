#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
		if(N==0)
			break;
		string S[N];
		int ano[N],t[N];
		for(int i=0;i<N;i++){
			cin >> S[i] >> ano[i] >> t[i];
			ano[i]-=t[i];
		}
		int comp=ano[0],s=0;
		for(int i=0;i<N;i++)
			if(ano[i]<comp){
				comp = ano[i];
				s=i;
			}
		
		cout << S[s] << '\n';
	}
}
