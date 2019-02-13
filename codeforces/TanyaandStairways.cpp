#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> A(N),S;
	for(auto &a:A) cin >> a;
	int es=0;
	for(int i=0;i<N;i++){
		if(A[i]==1){
			if(es)
				S.push_back(es);
			es=1;
		}else
			es++;
	}
	S.push_back(es);
	cout << S.size() << '\n';
	for(auto &s:S)
		cout << s << " ";
	cout << '\n';

}
