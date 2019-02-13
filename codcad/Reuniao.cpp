#include<bits/stdc++.h>

using namespace std;

int dist[102][102];
int main(){
	memset(dist,63,sizeof dist);
	int N,M;
	cin >> N >> M;
	while(M--){
		int a,b,c;
		cin >> a >> b >> c;
		dist[a][b]=dist[b][a]=c;
	}
	for(int i=0;i<N;i++)
		dist[i][i]=0;
	for(int k=0;k<N;k++)
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
				dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
	int out=0x3f3f3f3f;
	for(int i=0;i<N;i++){
		int saida=0;
		for(int j=0;j<N;j++)
			saida=max(saida,dist[i][j]);
		out=min(out,saida);
	}
	cout << out << '\n';
}
