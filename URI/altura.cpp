#include<bits/stdc++.h>
using namespace std;

int at[232],c;
void CoutingSort(){
	for(int i=20;i<232;i++)
		while(at[i]){
			if(c!=0)
				printf(" ");
			printf("%d",i);
			at[i]--;
			c++;
		}

}

int main(){
	int T,N,a;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		for(int i=0;i<N;i++)
			scanf("%d",&a),at[a]++;
		c=0;
		CoutingSort();
		printf("\n");
	}

}
