#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
int N,pd[1002][1<<4];
vector< pair<int,int> > A;

int dp(int id,int bitmask){
	if(bitmask==(1<<3)-1) return 0;
	if(id==N)
		return inf;
	if(pd[id][bitmask]!=-1) return pd[id][bitmask];
	return pd[id][bitmask] = min(dp(id+1,bitmask|A[id].second)+A[id].first,dp(id+1,bitmask));
}

main(){
	memset(pd,-1,sizeof pd);
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int a,k=0;string b;
		char s[4];
		scanf("%d %s",&a,s);
		b=s;
		for(auto &c:b)
			k|=(1<<(c-'A'));
		A.push_back({a,k});
	}
	int out =dp(0,0);
	printf("%d\n",((out>=inf)?-1:out));
}
