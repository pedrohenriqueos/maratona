#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M,quant=0;
	cin >> N >> M;
	bool Mat[N][M];
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++){
			char Ent[M];
			cin >> Ent[j];
			if(Ent[j]=='#')
				Mat[i][j]=true;
			if(Ent[j]=='.')
				Mat[i][j]=false;
		}
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(Mat[i][j] and (!Mat[i-1][j] or !Mat[i][j-1] or !Mat[i+1][j] or !Mat[i][j+1]))
				quant++;
		}
	}
	cout << quant << '\n';
}
