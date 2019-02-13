#include<bits/stdc++.h>
using namespace std;

bool ordem(pair<string,int> a,pair<string,int> b){
	return (a.first.size()==b.first.size())?a.second<b.second:a.first.size()>b.first.size();
}

int main(){
	int T;
	cin >> T;
	cin.ignore();
	while(T--){
		string s,str="";
		vector< pair<string,int> > saida;
		getline(cin,s);
		int pos=0;
		for(int i=0;i<s.size();i++){
			if(s[i]==' ' or i==s.size()-1){
				if(i==s.size()-1)
					str+=s[i];
				if(str.size()!=0){
					saida.push_back(make_pair(str,pos));
					pos++;
				}
				str="";
				continue;
			}
			str+=s[i];
		}
		sort(saida.begin(),saida.end(),ordem);
		for(int k=0;k<saida.size();k++){
			if(k!=0)
				cout << " ";
			cout << saida[k].first;
		}
		cout << '\n';
	}
}
