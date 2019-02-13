#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	while(cin >> N >> M){
		int A[N],L[1000002];
		memset(L,0,sizeof(L));
		for(int i=0;i<N;i++){
			scanf("%d",&A[i]);
			L[A[i]]++;
		}
		cin.ignore();	
		while(M--){
			int a,b;
			scanf("%d %d",&a,&b);
			if(L[b]<a){
				printf("0\n");
			}else{
				int cont=0;
				for(int i=0;i<N;i++){
					if(A[i]==b)
						cont++;
					if(cont==a){
						printf("%d\n",i+1);
						break;
					}
				}
			}
		}
	}

}
