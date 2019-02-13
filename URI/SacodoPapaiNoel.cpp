#include<bits/stdc++.h>

using namespace std;

int T,N;
int valor[101],peso[101];
pair<int,pair<int,int> > pd[101][51];
pair<int,pair<int,int> > dp(int id,int p){
	if(id>=N) return {0,{0,0}};
	if(pd[id][p].first!=-1) return pd[id][p];
	pair<int,pair<int,int> > k=dp(id+1,p);
	if(peso[id]<=p){
		pair<int,pair<int,int> > x=dp(id+1,p-peso[id]);
		if((x.second.second+valor[id])>k.second.second)
			return pd[id][p]={x.first+1,{x.second.first+peso[id],x.second.second+valor[id]}};
		else
			return pd[id][p]=k;
	}
	return pd[id][p]=k;
}
int main(){
	scanf("%d",&T);
	while(T--){
		memset(pd,-1,sizeof pd);
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d %d",&valor[i],&peso[i]);
		}
		pair<int,pair<int,int> > out=dp(0,50);
		printf("%d brinquedos\n",out.second.second);
		printf("Peso: %d kg\n",out.second.first);
		printf("sobra(m) %d pacote(s)\n\n",N-out.first);
	}

}
