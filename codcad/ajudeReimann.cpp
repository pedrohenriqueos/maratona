#include<bits/stdc++.h>
using namespace std;
#define MAXN 12000000
bool composto[MAXN];

int crivo(int n){
	int quant=0;
	composto[1]=1;
	for(int i=2;i<=MAXN;i++){
		if(!composto[i]){
			quant++;
			if(quant==n)
				return i;
			for(int j=2;j*i<=MAXN;j++)
				composto[i*j]=1;
		}
	}
	return -1;
}
int main(){
	int N;
	cin >> N;
	cout << crivo(N) << '\n';
}
