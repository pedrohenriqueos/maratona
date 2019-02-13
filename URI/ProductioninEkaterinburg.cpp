#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,a,b;
	while(cin >> N){
	priority_queue< pair<int,int>,vector< pair<int,int> >,greater< pair<int,int> > > pq;
	while(N--){
		cin >> a >> b;
		pq.push(make_pair(a,b));
	}
	int atual=1;
	while(!pq.empty()){
		pair<int,int> k=pq.top();
		pq.pop();
		if(atual>=k.first){
			atual+=k.second;
		}else{
			atual=k.first+k.second;
		}
	}
	cout << atual << '\n';
	}
}
