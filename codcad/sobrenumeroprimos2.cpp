#include<bits/stdc++.h>
using namespace std;

bool composto[10000001];

void crivo(int n){
	composto[1]=1;
	for(int i=2;i<=n;i++){
		if(!composto[i]){
			for(int j=2;j*i<=n;j++)
				composto[i*j]=1;
		}
	}
}

int main(){
	int N;
	cin >> N;
	crivo(N);
	for(int i=2;i<=N;i++)
		if(!composto[i])
			cout << i << " ";
	cout << '\n';
}
