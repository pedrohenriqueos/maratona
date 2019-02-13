#include<bits/stdc++.h>

using namespace std;
#define int long long
struct _st{
	int x,y,z;
};
typedef struct _st st;
main(){
	int T,N;
	scanf("%lld",&T);
	while(T--){
		scanf("%lld",&N);
		vector<st> A(N);
		for(auto &a:A) scanf("%lld %lld %lld",&a.x,&a.y,&a.z);
		long long cont=0LL;
		for(int i=0;i<N;i++)
			for(int j=i+1;j<N;j++){
				if((abs(A[i].x-A[j].x)+abs(A[i].y-A[j].y)+abs(A[i].z-A[j].z))==1){
					cont++;
				}
			}
		long long quant=N;
		quant=quant*6LL-2LL*cont;
		printf("%lld\n",quant);
	}


}
