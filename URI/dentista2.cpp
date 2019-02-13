#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int,int> a,pair<int,int> b){
  return a.second<b.second;

}
int main(){
	int N,a,b,ok=0,saida=0;
	cin >> N;
	vector< pair<int,int> > q;
	for(int i=0;i<N;i++){
		cin >> a >> b;
		q.push_back(make_pair(a,b));
	}
	sort(q.begin(),q.end(),comp);
	for(int i=0;i<N;i++){
		if(q[i].first>=ok){
			saida++;
			ok=q[i].second;
		}
	}
	cout << saida << '\n';
}
