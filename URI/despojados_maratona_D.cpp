#include<bits/stdc++.h>
using namespace std;

bool prime(long long N){
	for(int i=2;i<=sqrt(N);i++){
		if(N%i==0)
			return false;
		if(i%2==1)
			i++;
	}
	return true;
}

int main(){
	long long N;
	scanf("%lld",&N);
	if(!prime(N)){
		bool flag=false;
		int quant=0;
		for(int i=2;i*i<=N;i++){
			flag=false;
			while(N%i==0){		
				N/=i;
				if(!flag)
					quant++;
				flag=true;
			}
		}
		if(N!=1)
			quant++;
		if(quant>1){
		int out = (1<<quant)-(quant+1);
		printf("%d\n",out);
		}else
			printf("0\n");
	}else{
		printf("0\n");
	}	
}
