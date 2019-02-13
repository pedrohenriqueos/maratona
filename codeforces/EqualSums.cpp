#include<bits/stdc++.h>
using namespace std;

int main(){
	int T,N;
	scanf("%d",&T);
	vector< pair<int,vector< pair<int,int> > > > Q(T);
	for(int t=0;t<T;t++){
		scanf("%d",&N);
		vector< pair<int,int> > aux(N),in;
		int s=0;
		for(int i=0;i<N;i++){
			scanf("%d",&aux[i].first);
			s+=aux[i].first;
			aux[i].second=i+1;
		}
		sort(aux.begin(),aux.end());
		in.push_back(aux[0]);
		for(int i=1;i<N;i++)
			if(aux[i].first!=in[in.size()-1].first)
				in.push_back(aux[i]);
		Q[t]={s,in};
		for(int k=0;k<t;k++){
			int d=(s-Q[k].first);
			if((in[in.size()-1].first-Q[k].second[0].first)<d and (in[0].first-Q[k].second[Q[k].second.size()].first)<d)
				continue;
			for(int i=0;i<in.size();i++){
				int ini=0,fim=Q[k].second.size()-1,m;
				while(ini<=fim){
					m=(ini+fim)/2;
					if(Q[k].second[m].first==(in[i].first-d)){
						printf("YES\n%d %d\n%d %d\n",t+1,in[i].second,k+1,Q[k].second[m].second);
						return 0;
					}else if(Q[k].second[m].first>(in[i].first-d))
						fim=m-1;
					else ini=m+1;
				}
			}
		}
	}
	printf("NO\n");
}
