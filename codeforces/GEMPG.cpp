#include<bits/stdc++.h>
using namespace std;
#define int long long
vector< pair<int,int> > G[100002];
int resp=1;
bool flag;
void dfs(int v,int lim){
	cor[v]=1;
	if((int)G[v].size()==0){
		resp=v;
		return ;
	}
	int l=0,r=G[v].size()-1,mid,vali=-1;
	while(l<=r){
		mid = (l+r)/2;
		if(G[v][mid].first>=lim)
			r = mid-1;
		else vali=mid,l= mid+1;
	}
	if(vali==-1)
		resp=v;
	else if(G[v][vali].first<lim){
		dfs(G[v][vali].second,lim);
	}else
		resp=v;
		
}
int32_t main(){
	int T;
	scanf("%lld",&T);
	while(T--){
		int N,M;
		scanf("%lld %lld",&N,&M);
		for(int i=1;i<=N;i++)
			G[i].clear();
		for(int i=1;i<N;i++){
			int u,v,d;
			scanf("%lld %lld %lld",&u,&v,&d);
			G[u].push_back({d,v});
			G[v].push_back({d,u});
		}
		for(int i=1;i<=N;i++)
			sort(G[i].begin(),G[i].end());
		long long out=0;
		for(int i=0;i<M;i++){
			int x;
			flag=false;
			scanf("%lld",&x);
			dfs(1,x);
			out+=resp;
		}
		printf("%lld\n",out);
	}
}
