#include <bits/stdc++.h>
using namespace std;

int main(){
	int A,B,C;
	while(cin >> A >> B >> C){
		if(A==0 and B==0 and C==0)
			break;
		long long int K = A*B*C;
		int i=0;
		for(i=1;i<K;i++){
			if((i*i*i)==K)
				break;
			if((i*i*i)>K){
				i--;
				break;
			}
		}
		cout << i << '\n';
	}
}
