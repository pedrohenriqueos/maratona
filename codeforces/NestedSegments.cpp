#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b){
	return (a.second.first==b.second.first)?a.second.second>b.second.second:a.second.first<b.second.first;

}

int main(){
	int N,x=1;
	scanf("%d",&N);
	vector< pair<int,pair<int,int> > > A(N);
	for(auto &a:A) scanf("%d %d",&a.second.first,&a.second.second),a.first=x++;
	sort(A.begin(),A.end(),cmp);
	pair<int,pair<int,int> > atual=A[0];
	for(int i=1;i<A.size();i++){
		if(atual.second.first<=A[i].second.first and atual.second.second>=A[i].second.second){
			cout << A[i].first << " " << atual.first << '\n';
			return 0;
		}else if(A[i].second.second>=atual.second.second){
			atual=A[i];
		}
	}
	cout << "-1 -1\n";
}
