#include<bits/stdc++.h>
using namespace std;

map<string,int> Map;
pair< map<string,int>::iterator,bool > r;
vector<int> G[100001];
int main(){
	int V,R,x=0;
	cin >> R >> V;
	string str1,str2;
	while(R--){
		cin >> str1 >> str2;
		r=Map.insert({str1,x});
		if(r.second) x++;
		r=Map.insert({str2,x});
		if(r.second) x++;
		G[Map[str2]].push_back(Map[str1]);
	}
	while(V--){
		cin >> str1 >> str2;
		r=Map.insert({str1,x});
		if(r.second) x++;
		r=Map.insert({str2,x});
		if(r.second) x++;
		if(find(G[Map[str2]].begin(),G[Map[str2]].end(),Map[str1])!=G[Map[str2]].end())
			cout << "Nao e a mamae\n";
		else
			cout << "nao e o Nao e a mamae\n";
	}
}
