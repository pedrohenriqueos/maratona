#include<bits/stdc++.h>
using namespace std;

int N,M,pai[100002],peso[100002];

int find(int x){
	if(pai[x]==x)
		return x;
	return pai[x]=find(pai[x]);
}
void join(int x,int y){
	x=find(x);
	y=find(y);
	if(x==y)
		return ;
	if(peso[x]<peso[y])
		pai[x]=y;
	if(peso[x]>peso[y])
		pai[y]=x;
	if(peso[x]==peso[y]){
		pai[x]=y;
		peso[y]++;
	}
}

int main(){
	cin >> N >> M;
	for(int i=1;i<=N;i++)
		pai[i]=i;
	while(M--){
		char c;
		int a1,a2;
		cin >> c >> a1 >> a2;
		if(c=='F')
			join(a1,a2);
		else
			cout << ((find(a1)==find(a2))?"S\n":"N\n");
	}
}
