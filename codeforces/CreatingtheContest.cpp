#include<bits/stdc++.h>
using namespace std;

int N;
int main(){
	scanf("%d",&N);
	vector<int> A(N);
	for(auto &a:A) scanf("%d",&a);
	int out=1,val=1;
	for(int i=1;i<N;i++){
		if(A[i]<=(A[i-1]*2))
			out=max(out,++val);
		else val=1;
	}
	printf("%d\n",out);
}
