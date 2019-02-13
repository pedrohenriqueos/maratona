#include<bits/stdc++.h>
using namespace std;

int dr[]={0,1,0,-1};
int dc[]={1,0,-1,0};
int Mat[202][202];
int N,M;
int cor[40001];
int area;
int floodfill(int r,int c,int k,int p){
	if(r>=N or r<0 or c>=M or c<0)
		return 0;
	if(Mat[r][c]!=p)
		return 0;
	Mat[r][c] = k;
	int ans=1;
	for(int i=0;i<4;i++)
		if(Mat[r+dr[i]][c+dc[i]]==p)
			ans+=floodfill(r+dr[i],c+dc[i],k,p);
	return ans;
}

int main(){
	cin >> N >> M;
	for(int n=0;n<N;n++)
		for(int m=0;m<M;m++)
			cin >> Mat[n][m];
	area =40001;
	for(int n=0;n<N;n++)
		for(int m=0;m<M;m++){
			if(Mat[n][m]!=40002){
			int aux = floodfill(n,m,40002,Mat[n][m]);
			if(aux<area)
				area=aux;
			}
		}
	cout << area << '\n';
}
