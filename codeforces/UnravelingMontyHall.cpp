#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,a,out=0;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> a;
		out+=(a!=1);
	}
	cout << out << '\n';
}
