#include<bits/stdc++.h>
using namespace std;
#define m 1300000
int saida,c[m+1],quant[m+1];
void crivo(){
	for(int i=2;i<=m;i++)
		if(c[i]==0){
			saida++;
			quant[i]=saida;
			for(int j=1;i*j<=m;j++)
				c[i*j]++;
		}
}

int main(){
	int T;
	scanf("%d",&T);
	crivo();
	while(T--){
		int a;
		scanf("%d",&a);
		printf("%d\n",quant[a]);
	}
}
