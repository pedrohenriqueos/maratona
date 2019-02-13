#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int A[N],saida=0,maxc=0;;
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
		maxc=max(0,maxc+A[i]);
		saida = max(maxc,saida);
	}
	printf("%d\n",saida);
}
