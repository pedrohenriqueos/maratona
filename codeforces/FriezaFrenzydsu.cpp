#include<bits/stdc++.h>
using namespace std;
int pai[100002];
int find(int v){
	return (pai[v]==-1)?v:pai[v]=find(pai[v]);
}
void join(int a,int b){
	a=find(a),b=find(b);
	pai[a]=b;
}
int main(){
	memset(pai,-1,sizeof pai);
	int N,M;
	scanf("%d %d",&N,&M);
	vector< pair<int,int> > Aresta(M);
	vector<int> Q(M),R(M);
	for(auto &a:Aresta) scanf("%d %d",&a.first,&a.second);
	for(auto &a:Q) scanf("%d",&a);
	int resp=N;
	for(int i=M-1;i>=0;i--){
		R[i]=resp;
		if(find(Aresta[Q[i]-1].first)!=find(Aresta[Q[i]-1].second))
			join(Aresta[Q[i]-1].first,Aresta[Q[i]-1].second),resp--;
	}
	for(int i=0;i<M;i++)
		printf("%d\n",R[i]);
}
