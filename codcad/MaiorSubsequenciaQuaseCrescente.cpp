#include<bits/stdc++.h>

using namespace std;
#define inf 0x3f3f3f3f
int A[1002],x;
map<int,int> Map;
pair< map<int,int>::iterator,bool > r;
int dp[1002][1002];

int pd(int id,int v){
	if(id<0) return 0;
	if(dp[id][Map[v]]!=-1) return dp[id][Map[v]];
	if(A[id]<=v)
		return dp[id][Map[v]]=max(pd(id-1,A[id])+1,pd(id-1,v));
	return dp[id][Map[v]]=pd(id-1,v);
}
int main(){
	memset(dp,-1,sizeof dp);
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> A[i];
		r=Map.insert({A[i],x});
		if(r.second) x++;
	}
	r=Map.insert({inf,x});
		if(r.second) x++;
	cout << pd(N-1,inf) << '\n';

}
