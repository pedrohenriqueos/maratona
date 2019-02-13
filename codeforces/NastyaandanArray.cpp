#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,a;
	cin >> N;
	set<int> S;
	for(int i=0;i<N;i++){
		cin >> a;
		if(a!=0){
			S.insert(a);
		}
	}
	cout << S.size();
}
