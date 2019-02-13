#include<bits/stdc++.h>
using namespace std;

vector<int> G[200002],resp;

void dfs(int v){
	resp.push_back(v);
	for(auto u:G[v])
		dfs(u);
}
int main(){
	int N,a;
	scanf("%d",&N);
	for(int i=1;i<N;i++){
		scanf("%d",&a);
		G[i+1].push_back(a);
	}
	dfs(N);
	reverse(resp.begin(),resp.end());
	for(auto &r:resp)
		printf("%d ",r);
	puts("");
}
