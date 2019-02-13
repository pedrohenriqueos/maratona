#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	list <int> ilhas[N];
	for(int k=0;k<M;k++){
		int T,A,I;
		cin >> T >> A >> I;
		if(T==1){
			ilhas[A-1].push_back(I-1);
			ilhas[I-1].push_back(A-1);
		}
		if(T==0){
			if(find(ilhas[A-1].begin(),ilhas[A-1].end(),I-1)!=ilhas[A-1].end())
				cout << "1\n";
			else
				cout << "0\n";

		}
	}
	

}
