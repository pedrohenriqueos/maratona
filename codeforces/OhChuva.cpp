#include<bits/stdc++.h>

using namespace std;

#define abs(x) (x>0?x:-x)
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
int main(){
	int N;
	long long out=0;
	scanf("%d",&N);
	pair<int,int> r;
	vector< pair<int,int> > A(N);
	for(auto &a:A) scanf("%d %d",&a.first,&a.second);
	r=A[0];
	for(int i=1;i<N;i++){
		if((r.first<=A[i].first and A[i].first<=r.second) or (A[i].second>=r.first and r.second>=A[i].second)
			or (A[i].first<=r.first and A[i].second>=r.second) or(A[i].first>=r.first and A[i].second<=r.second))
			r.first=max(A[i].first,r.first),r.second=min(r.second,A[i].second);
		else{
			//printf("%d %d\n",r.first,r.second);
			out+=(long long)min(abs(A[i].second-r.first),abs(A[i].first-r.second));
			r=A[i];
		}
	}
	printf("%lld\n",out);
}
