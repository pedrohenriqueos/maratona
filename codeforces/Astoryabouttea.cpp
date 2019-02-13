#include<bits/stdc++.h>

using namespace std;

int main(){
	int N,K;
	scanf("%d %d",&N,&K);
	if(N>K)
		return !printf("N\n");
	printf("Y\n");
	char aux='A';
	while(K>N){
		printf("%c ",aux);
		if(aux=='A')
			aux='B';
		else if(aux=='B')
			aux='A';
		printf("%c\n",aux);
		K--;
	}
	K--;
	printf("%c C\n",aux);
	while(K--){
		printf("A C\n");
	}
}
