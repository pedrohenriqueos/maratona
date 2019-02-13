#include<bits/stdc++.h>
using namespace std;

int memo[220][220],T,N,x;
pair<double,double> A[220];
bool cmp(pair<double,double> a,pair<double,double> b){
	return ((a.first==b.first)?a.second>b.second:a.first<b.first);
}
//map<pair<double,double>,int> Map;
//pair<map<pair<double,double>,int>::iterator,bool> r;
int dp(int id,int idat){
	if(id>N) return 0;
	if(memo[id][idat]!=-1) return memo[id][idat];
	if(A[idat].first<A[id].first and A[idat].second>A[id].second)
		return memo[id][idat]=max(dp(id+1,id)+1,dp(id+1,idat));
	return memo[id][idat]=dp(id+1,idat);
}
int main(){
	cin >> T;
	while(T--){
		memset(memo,-1,sizeof memo);
		cin >> N;
		for(int i=1;i<=N;i++)
			cin >> A[i].first >> A[i].second;
		A[0]={-1.1,20.1};
		//sort(A,A+N+1,cmp);
		//for(int i=0;i<=N;i++)
			//cout << A[i].first << " " << A[i].second << '\n';
		cout << dp(1,0) << '\n';
	}

}
