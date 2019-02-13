#include<bits/stdc++.h>
using namespace std;

bool ordem(pair<int,int> a,pair<int,int> b){
	return a.first<b.first;
}

int main(){
	int N,S;
	cin >> N >> S;
	vector< pair<int,int> > dados,saida;
	while(S--){
		int a,b;
		cin >> a >> b;
		dados.push_back(make_pair(a,b));	
	}
	sort(dados.begin(),dados.end(),ordem);
	for(pair<int,int> d:dados){
		bool flag=false;
		for(pair<int,int> &s:saida){
			if(s.first<=d.first and s.second>=d.second){
				flag=true;
				break;
			}else if(s.first>d.first and d.second>s.second){
				s.first=d.first;
				s.second=d.second;
				flag=true;
				break;
			}else if(s.first>d.first and d.second>=s.first and d.second<=s.second){
				s.first=d.first;
				flag=true;
				break;
			}else if(d.second>s.second and d.first>=s.first and d.first<=s.second){
				s.second=d.second;
				flag=true;
				break;
			}
		}
		if(!flag)
			saida.push_back(make_pair(d.first,d.second));
	}
	for(vector< pair<int,int> >::iterator it=saida.begin();it!=saida.end();it++)
		cout << it->first << " " << it->second << '\n';
}
