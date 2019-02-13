#include<bits/stdc++.h>

using namespace std;

#define int long long
#define f first
#define s second

bool cmp(pair<int,int> a,pair<int,int> b){
	return (a.s-a.f)>(b.s-b.f);
}
 main(){
	int N;
	while(scanf("%lld",&N)!=EOF){
		vector< pair<int,int> > A(N),S;
		for(auto &a:A) scanf("%lld %lld",&a.f,&a.s);
		sort(A.begin(),A.end(),cmp);
		S.push_back(A[0]);
		for(int i=1;i<(int)A.size();i++){
			bool flag=false;
			for(int j=0;j<(int)S.size();j++){
				if((S[j].f<=A[i].s and S[j].f>=A[i].f) or (S[j].s<=A[i].s and S[j].s>=A[i].f)){
					S[j].f=max(A[i].f,S[j].f);
					S[j].s=min(A[i].s,S[j].s);
					flag=true;
					break;
				}
			}
			if(!flag){
				S.push_back(A[i]);
			}
		}
		printf("%lld\n",(int)S.size());
	}
}
