#include<bits/stdc++.h>
using namespace std;

int N,x,gr[1000],cor[1000];
map<string,int> Map;
pair< map<string,int>::iterator,bool > r;
vector<int> G[1000];
string S[1000];
void dfs(int v){
	cout << S[v] << '\n';
	cor[v]=1;
	for(int u:G[v])
		if(!cor[u])
			dfs(u);
}
int main(){
	cin >> N;
	while(N--){
		string str1,str2;
		cin >> str1 >> str2;
		r=Map.insert({str1,x});
		if(r.second) S[x]=str1,x++;
		r=Map.insert({str2,x});
		if(r.second) S[x]=str2,x++;
		
		gr[Map[str1]]++;
		G[Map[str2]].push_back(Map[str1]);
	}
	for(int i=0;i<x;i++)
		if(!gr[i])
			dfs(i);
}
