#include<bits/stdc++.h>
using namespace std;

int dr[]={0,1,-1,0};
int dc[]={1,0,0,-1};
char Mat[1030][1030];
int N,M;

void floodfill(int r,int c,char k,char p){
	if(r>N or r<0 or c>M or c<0)
		return ;
	if(Mat[r][c]!=p)
		return ;
	Mat[r][c]=k;
	for(int i=0;i<4;i++)
		floodfill(r+dr[i],c+dc[i],k,p);
}

int main(){
	cin >> N >> M;
	for(int n=1;n<=N;n++)
		for(int m=1;m<=M;m++)
			cin >> Mat[n][m];
	int saida=0;
	for(int n=1;n<=N;n++)
		for(int m=1;m<=M;m++)
			if(Mat[n][m]=='.'){
				saida++;
				floodfill(n,m,'a','.');
			}
	cout << saida << '\n';
}
