#include<bits/stdc++.h>

using namespace std;

int N,A[200001],o=1;
bool flag=false;
vector<int> G[200001];
void bfs(int v){
	queue<int> q;
	q.push(v);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		int sz=(int)G[u].size()-(u!=1);
		for(int i=0;i<sz;i++)
			if(binary_search(G[u].begin(),G[u].end(),A[o])){
				q.push(A[o++]);
			}else{
				flag=true;
				return ;
			}
	}
}
int main(){
	scanf("%d",&N);
	for(int i=1;i<N;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		G[a].push_back(b);
		G[b].push_back(a);
	}
	for(int a=0;a<N;a++)
		scanf("%d",&A[a]),sort(G[a+1].begin(),G[a+1].end());
	if(A[0]!=1)
		return !printf("No\n");
	o=1;
	bfs(1);
	if(flag) printf("No\n");
	else printf("Yes\n");


}





