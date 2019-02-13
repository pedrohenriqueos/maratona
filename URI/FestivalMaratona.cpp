#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define f first
#define s second

vector< pair< pair<int,int> , pair<int,int> > > S;
int N,pd[86401][1<<10];
int dp(int id,int t,int bitmask){
	if(id==(int)S.size()){
		if(bitmask==((1<<N)-1))
			return 0;
		else
			return -inf;
	}
	if(pd[t][bitmask]!=-1) return pd[t][bitmask];
	if(S[id].f.f>=t)
		return pd[t][bitmask] = max(dp(id+1,S[id].f.s,bitmask|(1<<S[id].s.f))+S[id].s.s,dp(id+1,t,bitmask));
	return pd[t][bitmask] = dp(id+1,t,bitmask);
}

bool cmp(pair< pair<int,int> , pair<int,int> > a, pair< pair<int,int> , pair<int,int> > b){
	return a.f.s<b.f.s;
}
int main(){
	memset(pd,-1,sizeof pd);
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int p;
		scanf("%d",&p);
		for(int j=0;j<p;j++){
			int u,v,d;
			scanf("%d %d %d",&u,&v,&d);
			S.push_back({{u,v},{i,d}});
		}
	}
	sort(S.begin(),S.end());
	int out= dp(0,0,0);
	if(out<0)
		printf("-1\n");
	else
		printf("%d\n",out);
}
