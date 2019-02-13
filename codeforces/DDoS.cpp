#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	scanf("%d",&N);
	vector<int> A(N);
	for(auto &a:A) scanf("%d",&a);
	int ans=0;
	for(int i=0;i<N;i++){
		int parc=0;
		for(int j=i;j<N;j++){
			parc+=A[j];
			if((j-i+1)>ans and parc>(100*(j-i+1)))
				ans=(j-i+1);
		}
	}
	printf("%d\n",ans);

}
