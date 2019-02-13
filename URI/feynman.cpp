#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
	if(N==0)
		break;
	int soma = 0;
	for(int i=1;i<=N;i++)
		soma+=(i*i);
	cout << soma << '\n';
	}
}
