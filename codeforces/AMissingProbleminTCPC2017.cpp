#include<bits/stdc++.h>
using namespace std;

int main(){
	long long T;
	scanf("%lld",&T);
	while(T--){
		int N;
		scanf("%d",&N);
		N--;
		int b=1,a;
		bool flag=false;
		for(int i=0;i<N;i++,b++){
			scanf("%d",&a);
			if(a!=b and !flag){
				flag=true;
				printf("%d\n",b);
			}
		}
		if(!flag)
			printf("%d\n",b);
	}

}
