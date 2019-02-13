#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int n=0;n<N;n++){
	int M,sum=0;
		cin >> M;
		string S[M];
		for(int m=0;m<M;m++){
			cin >> S[m];
			for(int k=0;k<S[m].size();k++)
				sum += (S[m][k]-65) + m + k;
		}
		cout << sum << '\n';
	}
}
