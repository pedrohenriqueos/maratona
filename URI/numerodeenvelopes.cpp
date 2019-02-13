#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,a;
	cin >> N >> M;
	int v[M+1];
	memset(v,0,sizeof(v));
	while(N--){
		cin >> a;
		v[a]++;
	}
	int saida=0x3f3f3f3f;
	for(int i=1;i<=M;i++)
		saida=min(v[i],saida);
	cout << saida << '\n';
}
