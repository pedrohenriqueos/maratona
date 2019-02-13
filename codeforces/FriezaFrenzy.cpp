#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > S;
vector<int> aux;
vector< pair<int,int> > G[100002];
int cor[100002],vis[100002];
int dfs(int v,int z){
	cor[v]=1;
	vis[v]=1;
	aux.push_back(v);
	for(pair<int,int> u:G[v]){
		if(!cor[u.second])
			dfs(u.second,v);
		else if(z!=u.second and z!=-1){
			aux.push_back(aux[0]);
			S.push_back(aux);
			aux.pop_back();
		}
	}
	aux.pop_back();
	vis[v]=0;
}
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	pair<int,int> Map[M];
	map< pair<int,int>,int> Ret;
	for(int m=1;m<=M;m++){
		int a,b;
		scanf("%d %d",&a,&b);
		G[a].push_back({m,b});
		G[b].push_back({m,a});
		Map[m]={a,b};
		Ret[{a,b}]=m;
	}
	for(int i=1;i<=N;i++)
		if(!cor[i])
			dfs(i,-1);
	int resp=1;
	for(int m=1;m<=M;m++){
		int a;
		pair<int,int> ele;
		bool flag=false;
		scanf("%d",&a);
		for(int i=0;i<S.size();i++){
			bool remove=false;
			for(int j=0;j<(S[i].size()-1);j++){
				if(Ret[{S[i][j],S[i][j+1]}]==a or Ret[{S[i][j+1],S[i][j]}]==a){
					flag=true;
					remove=true;
					break;
				}
			}
			if(remove) S.erase(S.begin()+i);
		}
		if(flag)
			printf("%d\n",resp);
		else
			printf("%d\n",++resp);
	}
}
