#include<bits/stdc++.h>
using namespace std;

int N,C,out=0,A[200001];
int pd[200001][1001];
int dp(int id,int val){
	if(id==N) return 0;
	if(pd[id][(val==0x3f3f3f3f)?0:val]!=-1) return pd[id][(val==0x3f3f3f3f)?0:val];
	if((A[id]-(val+C))>0)
		return pd[id][(val==0x3f3f3f3f)?0:val] = max(dp(id+1,0x3f3f3f3f)+A[id]-(val+C),dp(id+1,val));
	return pd[id][(val==0x3f3f3f3f)?0:val] = max(dp(id+1,A[id]),dp(id+1,val));
}
int main(){
	memset(pd,-1,sizeof(pd));
	scanf("%d %d",&N,&C);
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	cout << dp(0,0x3f3f3f3f) << '\n';
}
