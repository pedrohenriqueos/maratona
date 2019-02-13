#include<bits/stdc++.h>

using namespace std;
#define int long long
main(){
	int N,a;
	scanf("%lld",&N);
	for(int n=0;n<N;n++){
		scanf("%lld",&a);
		int i=0,j=sqrt(2*a),resp=0;
		while(i<=j){
			int m=(j+i)/2;
			if((m*m+m)<=(2*a)){
				resp=max(m,resp);
				i=m+1;
			}else
				j=m-1;
		}
		printf("%lld\n",resp);
	}

}
