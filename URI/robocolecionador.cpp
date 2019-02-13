#include<bits/stdc++.h>
using namespace std;
//        N  O S L
int dx[]={0,-1,0,1};
int dy[]={-1,0,1,0};

int main(){
	string move;
	int N,M,S,saida,s,dir,X,Y;
	while(cin >> N >> M >> S and N and M and S){
	char Mat[N][M];
	cin.ignore();
	for(int n=0;n<N;n++)
		for(int m=0;m<M;m++){
			cin >> Mat[n][m];
			if(Mat[n][m]=='N'){
				dir=0;
				Y=n;
				X=m;
				Mat[n][m]='.';
			}
			if(Mat[n][m]=='S'){
				dir=2;
				Y=n;
				X=m;
				Mat[n][m]='.';
			}
			if(Mat[n][m]=='O'){
				dir=1;
				Y=n;
				X=m;
				Mat[n][m]='.';
			}
			if(Mat[n][m]=='L'){
				dir=3;
				Y=n;
				X=m;
				Mat[n][m]='.';
			}
		}
	cin >> move;
	saida=0,s=0;
	while(s<move.size()){
		if(move[s]=='F'){
			if(X+dx[dir]>=0 and X+dx[dir]<M and Y+dy[dir]>=0 and Y+dy[dir]<N)
				if(Mat[Y+dy[dir]][X+dx[dir]]!='#'){
					X+=dx[dir],Y+=dy[dir];
					if(Mat[Y][X]=='*'){
						saida++;
						Mat[Y][X]='.';	
					}
				}
		}else if(move[s]=='D'){
			dir--;
			if(dir==-1)
				dir=3;
		}else if(move[s]=='E'){
			dir++;
			if(dir==4)
				dir=0;
		}
		s++;
	}
	cout << saida << '\n';
	}
}
