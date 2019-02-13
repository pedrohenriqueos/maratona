#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
typedef long long ll;
ll bfs(ll v,ll z){
	set<ll> V;
	queue< pair<ll,ll> > q;
	q.push({v,0});
	V.insert(v);
	while(true){
		ll u =q.front().first;
		ll d =q.front().second;
		q.pop();
		if(u==z)
			return d;
		if(V.find(u*2)==V.end()){
		q.push({u*2,d+1});
		V.insert(u*2);
		}
		if(V.find(u*3)==V.end()){
		q.push({u*3,d+1});
		V.insert(u*3);
		}
		if(V.find(u/2)==V.end()){
		q.push({u/2,d+1});
		V.insert(u/2);	
		}
		if(V.find(u/3)==V.end()){
		q.push({u/3,d+1});
		V.insert(u/3);
		}
		if(V.find(u+7)==V.end()){
		q.push({u+7,d+1});
		V.insert(u+7);
		}
		if(V.find(u-7)==V.end()){
		q.push({u-7,d+1});
		V.insert(u-7);
		}
	}
	return -1;
}

int main(){
	long long int N,M;	
	cin >> N >> M;
	cout << bfs(N,M) << '\n';
}
