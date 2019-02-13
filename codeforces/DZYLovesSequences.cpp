#include<bits/stdc++.h>
using namespace std;

int N,A[100002],S[100002],pd[100002][2];


int main(){
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]),S[i]=1;
		if(i and A[i]>A[i-1])
			S[i]+=S[i-1];
	}
	int out=(N==1)?1:2;
	for(int i=N-1;i>=0;i--){
		if((i-S[i]-1)>=0 and S[i]>1 and (A[i-S[i]+1])>A[i-S[i]-1])
			out=max(out,S[i-S[i]-1]+S[i]);
		if((i-S[i])>=0 and S[i]>1 and (A[i-S[i]+2]-1)>A[i-S[i]])
			out=max(out,S[i-S[i]]+S[i]);
		out=max(out,S[i]);
	}
	printf("%d\n",out);
}
