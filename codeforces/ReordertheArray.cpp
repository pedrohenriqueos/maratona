#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,out=0;
	cin >> N;
	vector<int> A(N),S;
	for(auto &a:A) cin >> a;
	sort(A.begin(),A.end());
	for(int i=N-1;i>0;i--){
		if(A[i]>A[i-1]){
			out++;
		}else{
			S.push_back(A[i]);
			if(S[0]>A[i-1]){
				S.erase(S.begin());
				out++;
			}
		}
	}
	cout << out << '\n';
}
