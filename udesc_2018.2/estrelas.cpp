#include<bits/stdc++.h>
using namespace std;

int out[20];
int main(){
	int T;
	cin >> T;
	int A[T][4];
	for(int i=0;i<T;i++)
		for(int j=0;j<4;j++)
			cin >> A[i][j];
	int x,y;
	while(cin >> x >> y){
		if(!x and !y) break;
		for(int i=0;i<T;i++)
			if(x>=A[i][0] and x<=A[i][1] and y>=A[i][2] and y<=A[i][3])
				out[i]++; 
	}
	for(int i=0;i<T;i++)
		cout << "CEU #" << i+1 << ": " << out[i] << " estrelas\n";
}
