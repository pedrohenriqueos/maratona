#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,a;
	scanf("%d %d",&N,&M);
	int F[N],V[N];
	F[0]=0;
	for(int n=1;n<N;n++)
		scanf("%d",&F[n]);
	for(int n=0;n<N;n++)
		scanf("%d",&V[n]);
	while(M--){
		scanf("%d",&a);
		int ini=0,fim=N-1,meio;
		while(true){
			meio=(ini+fim)/2;
			if(meio==0 and F[meio+1]>a)
				break;
			else if(meio==N-1 and F[meio]<=a)
				break;
			else if(F[meio]<=a and F[meio+1]>a)
				break;
			if(a<F[meio])
				fim=meio-1;
			else if(a>F[meio])
				ini=meio+1;
		}
		printf("%d",V[meio]);
		if(M>0)
			printf(" ");
	}
	printf("\n");
}
