#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int N,M;
	cin >> N >> M;
	int aux=M%10;
	for(long long int i=M-1;i>N;i--){
		aux=(aux*(i%10))%10;
		if(aux==0)
			break;
	}
	if(N==M)
		aux=1;
	cout << aux << '\n';
}
