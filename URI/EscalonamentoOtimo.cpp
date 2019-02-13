#include<bits/stdc++.h>

using namespace std;
vector<int> G[50002];
int grau[50002];
int grau2[50002];
int main(){
	int N,M;
	cin >> N >> M;
	while(M--){
		int a,b;
		cin >> a >> b;
		G[a].push_back(b);
		grau[b]++;
	}
	vector<int> out;
	set<int> ts;
	for(int i=0;i<N;i++)
		if(!grau[i]) ts.insert(i);
	//cout << ts[1] << '\n';
	int b=0;
	while(!ts.empty()){
		int a=*ts.begin();
		ts.erase(ts.begin());
		out.push_back(a);
		for(auto &u:G[a]){
			grau[u]--;
			if(!grau[u])
				ts.insert(u);
		}
	}
	//cout << ts.size() <<'\n';
	if((int)out.size()<N){
		cout << "*\n";
	}else{
		for(int i=0;i<out.size();i++)
			cout << out[i] << '\n';
	}
}
