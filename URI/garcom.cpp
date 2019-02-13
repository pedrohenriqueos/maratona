#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,saida=0;
	scanf("%d",&N);
	while(N--){
		int a,b;
		scanf("%d %d",&a,&b);
		if(a>b)
			saida+=b;
	}
	printf("%d\n",saida);
}
