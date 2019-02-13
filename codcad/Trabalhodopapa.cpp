#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
int N;
pair<int,int> A[1010];
int pd[1010][1010],x;
map<int,int> Map;
pair<map<int,int>::iterator,bool > r;
bool cmp(pair<int,int> a,pair<int,int> b){
	return (a.second==b.second)?(a.first>b.first):(a.second>b.second);
}
int dp(int id,int p){
	if(p<0) return -inf;
	if(id>=N or !p) return 0;
    r=Map.insert({p,x});
    if(r.second) x++;
	if(pd[id][Map[p]]!=-1) return pd[id][Map[p]];
	return pd[id][Map[p]]=max(dp(id+1,min(p-A[id].first,A[id].second-A[id].first))+1,dp(id+1,p));
}
int main(){
	memset(pd,-1,sizeof pd);
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> A[i].first >> A[i].second;
        r=Map.insert({A[i].second,x});
        if(r.second) x++;
    }
	sort(A,A+N,cmp);
	cout << dp(0,1000001) << '\n';
}
