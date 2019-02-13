#include<bits/stdc++.h>
using namespace std;

bool ordem(pair<int,int> a, pair<int,int> b){
	return (a.second==b.second)? a.first>b.first : a.second < b.second;
}
int main(){
	string S;
	int quant=0;
	while(getline(cin,S)){
		map<int,int> dados;
		for(char c:S){
			pair<map<int,int>::iterator , bool> r;
			r = dados.insert(make_pair(c,1));
			if(!r.second)
				dados[c]++;
		}
		vector< pair<int,int> > saida;
		for(map<int,int>::iterator it=dados.begin();it!=dados.end();it++)
			saida.push_back(make_pair(it->first,it->second));
		sort(saida.begin(),saida.end(),ordem);
		if(quant!=0)
			cout << '\n';
		for(pair<int,int> a:saida)
			cout << a.first << " " << a.second << '\n';
		quant++;
	}
}
