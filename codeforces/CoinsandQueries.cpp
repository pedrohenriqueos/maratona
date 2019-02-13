#include<bits/stdc++.h>
using namespace std;

int V[35];
int main(){
	int N,Q;
	scanf("%d %d",&N,&Q);
	vector<int> A(N);
	for(auto &a:A){
		scanf("%d",&a);
		V[(int)log2(a)]++;
	}
	while(Q--){
		int a,cont=0;
		scanf("%d",&a);
		for(int i=31;i>=0;i--){
			if(a>=(1<<i) and V[i]){
				int q=(a/(1<<i));
				q=min(q,V[i]);
				cont+=q;
				a-=(q*(1<<i));
			}
		}
		if(a==0){
			printf("%d\n",cont);
		}else
			printf("-1\n");
	}
}
