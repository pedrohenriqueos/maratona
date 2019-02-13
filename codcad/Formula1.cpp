#include<bits/stdc++.h>
using namespace std;
int G,P,S;

bool cmp(pair<int,int> a,pair<int,int> b){
	return ((a.first==b.first)?a.second<b.second:(a.first>b.first));
}
int main(){
	while(scanf("%d %d",&G,&P)!=EOF){
		if(!G and !P) break;
		int C[G][P+3];
		for(int i=0;i<G;i++){
			for(int j=1;j<=P;j++){
				int p;
				scanf("%d",&p);
				C[i][p]=j;
			}
		}
		scanf("%d",&S);
		while(S--){
			int V[P+3],tam;
			memset(V,0,sizeof V);
			scanf("%d",&tam);
			for(int t=1;t<=tam;t++){
				int a;
				scanf("%d",&a);
				for(int g=0;g<G;g++)
					V[C[g][t]]+=a;
			}
			pair<int,int> out[P+1];
			out[0]={0,0};
			for(int i=1;i<=P;i++){
				out[i]={V[i],i};
				//printf("%d %d\n",V[i],i);
			}
			sort(out,out+P+1,cmp);
			int m=out[0].first;
			//printf("%d ",m);
			vector<int> resp;
			resp.push_back(out[0].second);
			for(int pos=1;pos<=P;pos++){
				if(out[pos].first==m)
					resp.push_back(out[pos].second);
				else
					break;
			}
			for(int r=0;r<(int)resp.size();r++){
				if(r!=0) printf(" ");
				printf("%d",resp[r]);
			}
			printf("\n");
		}
	}


}
