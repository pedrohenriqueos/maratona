#include<bits/stdc++.h>
using namespace std;

int N,K,p[100002],a,b;

int find(int u){
	return (u==p[u])?u:p[u]=find(p[u]);
}

int join(int u,int v){
	u=find(u);
	v=find(v);
	p[u]=v;
}

int main(){
	cin >> N >> K;	
	for(int i =1;i<N;i++)
		p[i]=i;
	char c;
	while(K--){
		cin >> c >> a >> b;
		if(c=='C'){
			cout << ((find(a)==find(b))?"S\n":"N\n");
		}else
			join(a,b);
	}
}
