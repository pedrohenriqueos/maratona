#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		vector<int> A(N);
		int sum=0;
		long long out=1;
		for(auto &a:A)scanf("%d",&a),sum+=a;
		if(sum%N==0){
			sum/=N;
			int i=A.size()-1;
			while(A[i]>sum){
				out+=(A[i]-sum);
				i--;
			}
			printf("%d\n",out);
		}else
			printf("-1\n");
	}

}
