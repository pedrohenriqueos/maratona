#include<bits/stdc++.h>
using namespace std;

#define int long long
main(){
	int N;
	while(scanf("%lld",&N)!=EOF){
		vector<int> A(10*N);
		for(auto &a:A) scanf("%lld",&a);
		int resp=0,maior=0,cont=0;
		for(int n=0;n<2;n++){
			for(int i=0;i<(int)A.size();i++){
				if((maior+A[i])>0 and cont<(int)A.size()){
					cont++,maior+=A[i];
				}else
					cont=0,maior=0;
				resp=max(resp,maior);
			}
		}
		printf("%lld\n",resp);
	}

}
