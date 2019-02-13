#include<bits/stdc++.h>
using namespace std;

int M[40][40];


int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		memset(M,0,sizeof M);
		int P,N;
		scanf("%d %d",&P,&N);
		while(N--){
			int u,v;
			scanf("%d %d",&u,&v);
			M[u][v] = M[v][u] = 1;
		}
		int out=P;
		for(int i=1;i<=P;i++){
			int ans=0;
			for(int j=1;j<=P;j++){
				ans+=M[i][j];
				
			}
			printf("%d | %d\n",i,ans);
			if(ans==P)
				out++;
		}
		printf("%d\n",out);
	}
}
