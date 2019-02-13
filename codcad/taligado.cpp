#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	vector<int> G[N+1];
	vector<int>::iterator it;
	while(M--){
		int a,b,c;
		cin >> a >> b >> c;
		if(a){
			G[b].push_back(c);
			G[c].push_back(b);	
		}else{
			it = find(G[b].begin(),G[b].end(),c);
			(it!=G[b].end())?cout << "1\n":cout << "0\n";
		}
	}
}
