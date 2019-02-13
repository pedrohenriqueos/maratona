#include<bits/stdc++.h>

using namespace std;
#define inf 0x3f3f3f3f
int N,M,v[1002],p[1002],memo[1002][2002];
int pd(int id,int ini){
	if(ini<0)
		return -inf;
	if(memo[id][ini]!=-1)
		return memo[id][ini];
	if(id==N or ini==0)
		return memo[id][ini]=0;
	return memo[id][ini]=max(pd(id,ini-p[id])+v[id],max(pd(id+1,ini),pd(id+1,ini-p[id])+v[id]));
}
int main(){
	memset(memo,-1,sizeof memo);
	scanf("%d %d",&N,&M);
	for(int i=0;i<N;i++)
		scanf("%d %d",&p[i],&v[i]);
	printf("%d\n",pd(0,M));
}
