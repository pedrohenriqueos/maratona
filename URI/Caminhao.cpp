#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f

vector< pair<int,int> > G[20001];
int cor[20001],tempo=1,N,M,S,resp=0;
int dfs(int v,int t,int f){
	cor[v]=tempo;
	int ans=f;
	for(pair<int,int> u:G[v])
		if(u.second==t){
			resp=max(resp,min(f,u.first));
		}else if(cor[u.second]<tempo){
			ans=dfs(u.second,t,min(f,u.first));
		}
	return ans;
}
int main(){
	while(scanf("%d %d %d",&N,&M,&S)!=EOF){
		int u,v,f;
		while(M--){
			scanf("%d %d %d",&u,&v,&f);
			G[u].push_back({f,v});
			G[v].push_back({f,u});
		}
		while(S--){
			scanf("%d %d",&u,&v);
			resp=0;tempo++;
			dfs(u,v,inf);
			printf("%d\n",resp);
		}
		for(int i=1;i<=N;i++)
			G[i].clear();
	}

}
