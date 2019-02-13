#include<bits/stdc++.h>
using namespace std;

int V[100002];
int main(){
	int N,K,x=1;
	cin >> N >> K;
	vector<int> A(N);
	set<int> S;
	for(auto &a:A){
		scanf("%d",&a),S.insert(a);
		V[a]++;
		if(S.size()==K){
			int ini=0;
			while(V[A[ini]]>1){
				V[A[ini]]--;
				ini++;
			}
			cout << ini+1 << " " << x << '\n';
			return 0; 
		}
		x++;
	}
	cout << "-1 -1\n";
	
}
