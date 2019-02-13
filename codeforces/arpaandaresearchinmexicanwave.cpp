#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N,K,T;
	cin >> N >> K >> T;
	if(T>=K and T<=N){
		cout << K << '\n';	
	}else if(T<K){
		cout << T << '\n';
	}else
		cout << N+K-T << '\n';	

}
