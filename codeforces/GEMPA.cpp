#include<bits/stdc++.h>
using namespace std;

#define int long long

inline int f(int X){
	int s=0;
	while(X){
		X/=10;
		s++;
	}
	return s;
}
inline 
int32_t main(){
	int T;
	scanf("%lld",&T);
	while(T--){
		int N,X;
		scanf("%lld %lld",&N,&X);
		int cont=0,aux=X,save=0,val;
		while(cont<N){
			int k = f(aux);
			if(X%10==0){
				save=fexp(10,k+1)-fexp(10,k);
			}
			if(save){
				
				save--;
				continue;
			}
			cont+=k;
			aux++;
		}
		if(cont==N)
			printf("%lld\n",aux-X);
		else
			printf("-1\n");
	}

}
