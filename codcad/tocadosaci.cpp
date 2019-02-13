#include<bits/stdc++.h>
using namespace std;

int N,M,Mat[1002][1002];
int dr[]={1,0,-1,0};
int dc[]={0,1,0,-1};
bool flag;
int floodfill(int r,int c,int k,int p){
	if(r>=N or r<0 or c>=M or c<0)
		return 0;
	if(Mat[r][c]==3){
		flag =true;
		return 1;
	}
	if(Mat[r][c]!=p)
		return 0;

	Mat[r][c]=k;
	int ans=1;
	for(int i=0;i<4;i++){
		if(Mat[r+dr[i]][c+dc[i]]==p or Mat[r+dr[i]][c+dc[i]]==3){
			ans+=floodfill(r+dr[i],c+dc[i],k,p);
			break;
		}
	}
	return ans;
}

int main(){
	cin >> N >> M;
	pair<int,int> ini;
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++){
			cin >> Mat[i][j];
			if(Mat[i][j]==2){
				ini.first = i;
				ini.second = j;
				Mat[i][j]=1;
			}
		}
	int saida;
	flag=false;
	while(!flag){
	Mat[ini.first][ini.second]=1;
	saida = floodfill(ini.first,ini.second,0,1);
	}
	cout << saida << '\n';
}
