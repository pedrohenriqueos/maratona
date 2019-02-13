#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,K;
	scanf("%d",&N);
	int A[N];
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	scanf("%d",&K);
	int i=0,j=N-1;
	while(A[i]+A[j]!=K){
		if(A[i]+A[j]>K)
			j--;
		if(A[i]+A[j]<K)
			i++;
	}
	printf("%d %d\n",A[i],A[j]);
}
