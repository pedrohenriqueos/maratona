#include<bits/stdc++.h>
using namespace std;

int main(){
	string t,s1;
	getline(cin,t);
	int N;
	cin >> N;
	vector< pair< string, vector<int> > > D;
	vector<int> k;
	for(int i=0;i<N;i++){
		cin >> s1;
		D.push_back(make_pair(s1,k)); 
	}
	string str="";
	int ini=0;
	for(int i=0;i<t.size();i++){
		if(t[i]==' '){
			for(pair< string, vector<int> > &v:D){
				if(v.first==str){
					v.second.push_back(ini);
					break;
				}
			}
			str="";
		}else{
			if(str=="")
				ini=i;
			str+=t[i];
		}
		if(i==t.size()-1){
			for(pair< string, vector<int> > &v:D){
				if(v.first==str){
					v.second.push_back(ini);
					break;
				}
			}
		}
	}
	for(pair< string, vector<int> > v:D){
		if(v.second.size()==0){
			printf("-1\n");
			continue;
		}
		for(int i=0;i<v.second.size();i++){
			if(i!=0)
				printf(" ");
			printf("%d",v.second[i]);
		}
		printf("\n");
	}
}
