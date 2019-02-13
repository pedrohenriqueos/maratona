#include<bits/stdc++.h>
using namespace std;

int X,Y,Mat[1002][1002],kx,ky,posx,posy,N;
int dx[] = {0,0,1,1,-1,-1,1,-1};
int dy[] = {1,-1,1,-1,0,-1,0,1};
bool flag;
inline void pq(int x,int y){
	for(int i=0;i<8;i++){
		int ax = x+dx[i],ay = y+dy[i];
		while(ax>=1 and ax<=N and ay>=1 and ay<=N){
			Mat[ax][ay]=1;
			ax+=dx[i],ay+=dy[i];
		}
	}
}

void floodfill(int x,int y){
	if(x<1 or x>N or y<1 or y>N or flag)
		return ;
	if(x==posx and y==posy){
		flag=true;
		return ;
	}
	if(Mat[x][y]) return ;
	Mat[x][y]=2;
	for(int i=0;i<8;i++){
		floodfill(x+dx[i],y+dy[i]);
	}

}
int main(){
	int qx,qy;
	cin >> N;
	X=N,Y=N;
	cin >> qx >> qy;
	flag=false;
	pq(qx,qy);
	cin >> kx >> ky;
	cin >> posx >> posy;
	floodfill(kx,ky);
	cout << ((flag)?"YES\n":"NO\n");
}
