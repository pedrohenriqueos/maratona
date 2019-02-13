#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int A;
		long long int soma=0;
		scanf("%d",&A);
		for(int i=0;i<A;i++)
			soma+=(1<<i);
		printf("%lld\n",soma);
	}
}
