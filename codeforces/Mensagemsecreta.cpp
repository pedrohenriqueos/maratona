#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,Q;
	cin >> N >> Q;
	string str;
	cin >> str;
	vector< pair<int,int> > A(Q);
	for(auto &a:A) cin >> a.first >> a.second;
	for(int i=Q-1;i>=0;i--)
		swap(str[A[i].first-1],str[A[i].second-1]);
	cout << str << '\n';
}
