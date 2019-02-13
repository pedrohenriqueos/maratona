#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(vector< pair<ll,char> > A, bool flag){
	ll atual=0,ans=0;
	for(int i=0;i<A.size();i++){
		if(A[i].second=='S' and flag){
			ans=max(ans,A[i].first-atual);
			atual=A[i].first;
			A[i].second='X';
			flag=!flag;
		}else if(A[i].second=='S'){
			flag=!flag;
		}else{
			ans=max(ans,A[i].first-atual);
			atual=A[i].first;
		}
	}
	A.insert(A.begin(),{0,'B'});
	for(int i=A.size()-1;i>=0;i--){
		if(A[i].second=='S' or A[i].second=='B'){
			ans=max(ans,atual-A[i].first);
			atual=A[i].first;
		}
	}
	return ans;
}
int main(){
	int T,N,cas=0;
	cin >> T;
	while(T--){
		ll D;
		cin >> N >> D;
		vector< pair<ll,char> > A;
		for(int i=0;i<N;i++){
			char s,c;ll a;
			cin >> s >> c >> a;
			A.push_back({a,s});
		}
		A.push_back({D,'B'});
		cout << "Case " << ++cas << ": " << solve(A,true) << '\n';
	}
}
