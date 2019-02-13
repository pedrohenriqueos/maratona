#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,d=0,e=0;
	cin >> N;
	N++;
	vector< pair<int,int> > A;
	for(int i=0;i<N;i++){
		pair<int,int> a;
		cin >> a.first >> a.second;
		A.push_back(a);
	}
	//A.push_back(A[0]);
	A.push_back(A[1]);
	for(int i=0;i<A.size()-2;i++){
		if((A[i].first==A[i+1].first and A[i+1].second>A[i].second and A[i+2].first>A[i+1].first and A[i+2].second==A[i+1].second) or (A[i].first==A[i+1].first and A[i].second>A[i+1].second and A[i+1].first>A[i+2].first and A[i+1].second==A[i+2].second) or (A[i].first<A[i+1].first and A[i].second==A[i+1].second and A[i+1].first==A[i+2].first and A[i+2].second<A[i+1].second) or (A[i].first>A[i+1].first and A[i].second==A[i+1].second and A[i+1].first==A[i+2].first and A[i+2].second>A[i+1].second)){
			d++;
		}else
			e++;
	}
	cout << min(d,e) << '\n';
}
