#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,costas=0;
	cin >> N >> M;
	char C[N][M];
	for(int n=0;n<N;n++)
		for(int m=0;m<M;m++)
			cin >> C[n][m];
	for(int n=0;n<N;n++)
		for(int m=0;m<M;m++)
			if(C[n][m]=='#'){
				if(n==0 or m==0 or n==N-1 or m==M-1)
					costas++;
				else if(C[n-1][m]=='.' or C[n+1][m]=='.' or C[n][m-1]=='.' or C[n][m+1]=='.')
					costas++;
			}
	cout << costas << '\n';
}
