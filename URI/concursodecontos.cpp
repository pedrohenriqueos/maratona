#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M,A;
	while(cin >> N >> M >> A){
		string S[N];
		int sum=0,l=0,cont=0;
		for(int i=0;i<N;i++){
			cin >> S[i];
			l+=S[i].size()+1;
			if((l-1)>A){
				sum+=(l-S[i].size()-2);
				l=S[i].size()+1;
				cont++;
			}else if((l-1)==A){
				sum+=l-1;
				l=0;
				cont++;
			}
		}
		if(l>0){
		sum+=l-1;
		cont++;
		}
		cont = ((cont%M==0) ? cont/M : (cont/M)+1 );
		cout << cont << '\n';
	}
}
