#include<bits/stdc++.h>

using namespace std;

int N,M;
bool cmp(pair<int,string> a, pair<int,string> b){
	return a.first>b.first;
}
int main(){
	cin >> N >> M;
	vector<string> St(N);
	int C[M];
	memset(C,0,sizeof C);
	for(int i=0;i<N;i++){
		cin >> St[i];
		int cont=0;
		for(int j=0;j<M;j++){
			C[j]+=(St[i][j]=='1');
		}
	}
	for(int i=0;i<St.size();i++){
		bool flag=false;
		for(int j=0;j<St[i].size();j++){
			if(St[i][j]=='1' and C[j]==1){
				flag=true;
				break;
			}
		}
		if(!flag){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
}
