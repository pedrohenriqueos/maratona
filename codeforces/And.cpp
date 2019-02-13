#include<bits/stdc++.h>
using namespace std;

int V[100002],V2[100002];
int main(){
	int N,M;
	cin >> N >> M;
	vector<int> A(N),B(N),Ver;
	bool flag=false,flag2=false;
	int i=0;
	for(auto &a:A){
		cin >> a;
		if(V2[a&M]){
			flag2=true;
			Ver.push_back(a&M);
		}
		if(V[a])
			flag=true;
		V[a]++;
		V2[a&M]++;
	}
	if(flag){
		cout << "0\n";
	}else if(flag2){
		for(int i=0;i<Ver.size();i++){
			if(V[Ver[i]]){
				cout << "1\n";
				return 0;
			}
		}
		cout << "2\n";
	}else{
		cout << "-1\n";
	}
}
