#include<bits/stdc++.h>
using namespace std;

int S[1000002];
int main(){
	int N;
	scanf("%d",&N);
	int A[N],saida=N;
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
		for(int j=max((i-A[i]),0);j<i;j++){
			if(!S[j])
				S[j]=1,saida--;
		}
	}
	printf("%d\n",saida);
}
