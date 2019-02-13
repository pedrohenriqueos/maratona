#include<bits/stdc++.h>
using namespace std;

int V[3];
int main(){
	int N;
	cin >> N;
	vector<int> A(N);
	for(auto &a:A) cin >> a,V[a]++;
	int out=min(V[1],V[2]);
	V[1]-=out;
	V[2]-=out;
	out+=(V[1]/3);
	cout << out << '\n';
}
