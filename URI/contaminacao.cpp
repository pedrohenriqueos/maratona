#include<bits/stdc++.h>
using namespace std;

int dr[]={0,1,0,-1};
int dc[]={1,0,-1,0};
int N,M;
char Mat[51][51];
bool teste;
void floodfill(int r,int c,char k, char p){
	if(r>=N or r<0 or c>=M or c<0)
		return ;
	if(Mat[r][c]!=p and teste)
		return ;
	teste=true;
	Mat[r][c]=k;
	for(int i=0;i<4;i++)
		floodfill(r+dr[i],c+dc[i],k,p);
}

int main(){
	while(cin >> N >> M and N and M){
		for(int n=0;n<N;n++)
			for(int m=0;m<M;m++)
				cin >> Mat[n][m];
		for(int n=0;n<N;n++)
			for(int m=0;m<M;m++){
				teste=false;
				if(Mat[n][m]=='T')
					floodfill(n,m,'T','A');
			}
		for(int n=0;n<N;n++){
			for(int m=0;m<M;m++){
				cout << Mat[n][m];
			}
			cout << '\n';
		}
		cout << '\n';
	}
}
