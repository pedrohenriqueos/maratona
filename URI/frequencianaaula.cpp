#include<bits/stdc++.h>
using namespace std;

int F[1000002];

int main(){
	int N;
	scanf("%d",&N);
	while(N--){
		int a;
		scanf("%d",&a);
		F[a]++;
	}
	int saida=0;
	for(int i=0;i<1000001;i++)
		if(F[i])
			saida++;
	printf("%d\n",saida);
}
