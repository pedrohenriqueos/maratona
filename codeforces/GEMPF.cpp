#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	int T,N;
	cin >> T;
	while(T--){
		cin >> N;
		bool flag =false;
		for(int i=1;i<N;i++){
			int a;
			cin >> a;
			if(a!=i and !flag){
				flag=true;
				printf("%d\n",i);
			}
		}
		if(!flag)
			printf("%d\n",N);
	}
}
