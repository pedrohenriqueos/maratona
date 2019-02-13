#include<bits/stdc++.h>
using namespace std;

bool comp(pair<string,int> a,pair<string,int> b){
	return a.second>b.second;
}
bool comp2(string a,string b){
	return a>b;
}

int main(){
	int N,M;
	cin >> N >> M;
	vector< pair<string,int> > A;
	for(int n=0;n<N;n++){
		pair<string,int> s;
		cin >> s.first >> s.second;
		A.push_back(s);
	}
	sort(A.begin(),A.end(),comp);
	vector< pair<string,int> >::iterator it;
	vector<string> T[M];
	int cont=0;
	for(it=A.begin();it!=A.end();it++){
		T[cont%M].push_back(it->first);
		cont++;
	}
	for(int m=0;m<M;m++){
		sort(T[m].begin(),T[m].end(),comp2);
		if(m!=0)
			cout << '\n';
		cout << "Time " << m+1 << '\n';
		while(!T[m].empty()){
			cout << T[m].back() << '\n';
			T[m].pop_back();
		}
	}	
}
