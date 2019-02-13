#include<bits/stdc++.h>

using namespace std;
#define f first
#define s second
int N,M,K,s,t,cor[1002];
vector<int> resp;
vector< pair<int,pair<int,int> > > G[1002];
void dfs(int v,int c,int d){
	if(v==t){ resp.push_back({c,d}); return ;}
	cor[v]=1;
	for(auto &a:G[v])
		if(!cor[a.f]){
			if((a.s.f>=c and a.s.f<=d) or (c>=a.s.f and c<=a.s.s))
				dfs(a.f,max(c,a.s.f),min(d,a.s.s));
		}
}
int32_t main(){
	scanf("%d %d %d",&N,&M,&K);
	scanf("%d %d",&s,&t);
	for(int i=0;i<M;i++){
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		G[a].push_back({b,{c,d}});
	}
	dfs(s,0,0x3f3f3f3f);
	sort()
	printf("%d\n",resp);
}
