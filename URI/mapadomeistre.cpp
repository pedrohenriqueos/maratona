#include<bits/stdc++.h>
using namespace std;
char Mat[101][101];
int N,M,direcao;
vector<pair<int,int> > G;
int dr[]={0,1,-1,0};
int dc[]={1,0,0,-1};
bool saida;
void floodfill(int r,int c,char k,char p){
	if(r>=N or r<0 or c>=M or c<0)
		return ;
	if(find(G.begin(),G.end(),pair<int,int>(r,c))!=G.end())
		return ;
	if(Mat[r][c]=='>'){
		G.push_back(make_pair(r,c));
		direcao=1;
		floodfill(r+dr[direcao],c+dc[direcao],k,p);
	}
	if(Mat[r][c]=='<'){
		G.push_back(make_pair(r,c));
		direcao=2;
		floodfill(r+dr[direcao],c+dc[direcao],k,p);
	}
	if(Mat[r][c]=='v'){
		G.push_back(make_pair(r,c));
		direcao=3;
		floodfill(r+dr[direcao],c+dc[direcao],k,p);
	}
	if(Mat[r][c]=='^'){
		G.push_back(make_pair(r,c));
		direcao=0;
		floodfill(r+dr[direcao],c+dc[direcao],k,p);
	}
	if(Mat[r][c]=='*'){
		saida=true;
		return ;
	}
	Mat[r][c]=k;
	floodfill(r+dr[direcao],c+dc[direcao],k,p);
}

int main(){
	cin >> N >> M;
	saida=false;
	for(int n=0;n<N;n++)	
		for(int m=0;m<M;m++)
			cin >> Mat[n][m];
	floodfill(0,0,'.','.');
	(saida)?cout << "*\n":cout << "!\n";
}
