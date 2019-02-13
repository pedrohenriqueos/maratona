#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,T;
	cin >> N >> M;
	bool out=false;
	while(M--){
		cin >> T;
		vector<int> A(T);
		set<int> S;
		bool flag=false;
		for(int i=0;i<T;i++){
			int a;
			cin >> a;
			if(!flag){
				if(S.find(abs(a))!=S.end())
					flag=true;
				else
					S.insert(abs(a));
			}
		}
		if(!flag){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
}
