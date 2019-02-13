#include<bits/stdc++.h>
using namespace std;

int prim[1000001];
void crivo(){
	prim[1]=1;
	for(int i=2;i<=1000000;i++){
		if(!prim[i]){
			for(int j=2;j*i<=1000000;j++)
				prim[j*i]=1;
		}
	}
}
int main(){
	long long int N,a;
	scanf("%lld",&N);
	crivo();
	for(int n=0;n<N;n++){
		scanf("%lld",&a);
		if(sqrt(a)==floor(sqrt(a)) and !prim[(int)sqrt(a)]){
			printf("YES\n");
		}else printf("NO\n");
	}
}
