int tsp(int bitmask,int id){//O((2^n)*(n^2))
	if(memo[bitmask][id]!=-1)
		return memo[bitmask][id];
	if(bitmask==((1<<N)-1))
		return dist[id][0];
	int ans=INT_MAX;
	for(int i=0;i<N;i++)
		if(!(bitmask&(1<<i)))
			ans=min(ans,tsp((bitmask|(1<<i)),i)+dist[id][i]);
	return memo[bitmask][id]=ans;
}
