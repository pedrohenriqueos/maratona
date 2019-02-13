#include<bits/stdc++.h>
using namespace std;

int V[100002];
int main(){
	int N;
	cin >> N;
	vector<int> A(N);
	for(auto &a:A){
		cin >> a;
		V[a]++;
		while(V[N]) cout << N-- << " ";
		cout << '\n';
	}
}
