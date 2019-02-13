#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	if(N*N==M){
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cout << "1 ";
			}
			cout << '\n';
		}
	}else if(N>=M){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==j and M>0){
				cout << "1 ";
				M--;
			}else{
				cout << "0 ";
			}
		}
		cout << '\n';
	}
	}else
		cout << "-1\n";
}
