#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int N,M;
	cin >> N >> M;
	long long int A,ant=0,saida=0;
	for(long long int n=0;n<N;n++){
		cin >> A;
		long long int mmax=max(A,M-A),mmin=min(A,M-A);
		if(mmin>=ant){
			saida+=mmin;
			ant=mmin;
		}else if(mmin<ant and mmax>=ant){
			saida+=mmax;
			ant=mmax;
		}else{
			saida=-1;
			break;
		}
	}
	cout << saida << '\n';
}
