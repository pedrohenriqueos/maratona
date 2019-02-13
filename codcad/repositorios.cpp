#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,a,b;
	cin >> N >> M;
	map<int,int> An;
	map<int,int> S;
	pair<map<int,int>::iterator,bool> r;
	for(int n=0;n<N;n++){
		cin >> a >> b;
		r=An.insert(pair<int,int>(a,b));
		if(!r.second and An[a]<b)
			An[a]=b;	
	}
	for(int m=0;m<M;m++){
		cin >> a >> b;
		r = S.insert(pair<int,int>(a,b));
		if(!r.second and S[a]<b)
			S[a]=b;	
	}
	for(map<int,int>::iterator it=S.begin();it!=S.end();it++)
		if(An[it->first] < it->second)
			cout << it->first << " " << it->second << '\n';
}
