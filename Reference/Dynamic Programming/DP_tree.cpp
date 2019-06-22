int dp(int v,bool flag){
	if(pd[v][flag]!=-1) return pd[v][flag];
	int cas1=0,cas2=0;
	if(flag) cas1=A[v];
	for(int u:G[v]){
		if(u!=pai[v]){
			pai[u]=v;
			cas1+=dp(u,false);
			cas2+=dp(u,true);
		}
	}
	if(flag) return pd[v][flag]=max(cas1,cas2);
	return pd[v][flag]=cas2;
}
