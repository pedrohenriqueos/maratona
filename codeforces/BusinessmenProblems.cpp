#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N;
	long long out=0;
	vector< pair<long long,long long> > A(N);
	for(auto &a:A) cin >> a.first >> a.second;
	cin >> M;
	vector< pair<long long,long long> > B(M);
	for(auto &b:B) cin >> b.first >> b.second;
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	int a=0,b=0;
	while(a<A.size() or b<B.size()){
		if(a==A.size())
			out+=B[b].second,b++;
		else if(b==B.size())
			out+=A[a].second,a++;
		else if(A[a].first==B[b].first){
			out+=max(B[b].second,A[a].second);
			b++,a++;
		}else if(A[a].first>B[b].first){
			out+=B[b].second; b++;
		}else{
			out+=A[a].second; a++;
		}
	}
	cout << out << '\n';
}
