#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		int M;
		bool igual=true;
		cin >> M;
		string X[M];
		for(int j=0;j<M;j++)
			cin >> X[j];
		for(int a=1;a<M;a++){
			if(X[a]==X[a-1])
				continue;
			else{
				igual=false;
				break;	
			}
		}
		(igual) ? cout << X[0] << '\n' : cout << "ingles\n";
	}
}
