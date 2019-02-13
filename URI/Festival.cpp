#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define f first
#define s second

vector< pair< pair<int,int> , pair<int,int> > > S;
map<int,int> Map;
pair< map<int,int>::iterator,bool > r;
int N,pd[1002][1<<10],x;
int dp(int id,int t,int bitmask){
	if(id==(int)S.size()){
		if(bitmask==((1<<N)-1))
			return 0;
		else
			return -inf;
	}
	if(pd[Map[t]][bitmask]!=-1) return pd[Map[t]][bitmask];
	if(S[id].f.f>=t)
		return pd[Map[t]][bitmask] = max(dp(id+1,S[id].f.s,bitmask|(1<<S[id].s.f))+S[id].s.s,dp(id+1,t,bitmask));
	return pd[Map[t]][bitmask] = dp(id+1,t,bitmask);
}

int main(){
	memset(pd,-1,sizeof pd);
	scanf("%d",&N);
	r=Map.insert({0,x});
	if(r.second) x++;
	for(int i=0;i<N;i++){
		int p;
		scanf("%d",&p);
		for(int j=0;j<p;j++){
			int u,v,d;
			scanf("%d %d %d",&u,&v,&d);
			r=Map.insert({v,x});
			if(r.second) x++;
			S.push_back({{u,v},{i,d}});
		}
	}
	sort(S.begin(),S.end());
	int out= dp(0,0,0);
	if(out<0)
		printf("-1\n");
	else
		printf("%d\n",out);
}
