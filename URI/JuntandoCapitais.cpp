#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
int N,K,pai[200];
int find(int x){
	return ((pai[x]==-1)?x:pai[x]=find(pai[x]));
}
inline void join(int a,int b){
	pai[find(a)]=find(b);
}
int main(){
	memset(pai,-1,sizeof pai);
	scanf("%d %d",&N,&K);
	vector< pair<double,double> > C(K),A(N-K);
	priority_queue< pair<double,pair<int,int> >,vector< pair<double,pair<int,int> > >, greater< pair<double,pair<int,int> > > > pq;
	for(auto &a:C) scanf("%lf %lf",&a.f,&a.s);
	for(int a=0;a<(N-K);a++){
		scanf("%lf %lf",&A[a].f,&A[a].s);
		for(int i=0;i<K;i++)
			pq.push({(C[i].f-A[a].f)*(C[i].f-A[a].f)+(C[i].s-A[a].s)*(C[i].s-A[a].s),{i,a+K}});
	}
	vector<int> c;
	double out=0.0;
	while(!pq.empty()){
		pair<double,pair<int,int> > k=pq.top();
		pq.pop();
		if(find(k.s.f)==k.s.f){
			join(k.s.f,k.s.s);
			c.push_back(k.s.s);
			out+=sqrt(k.f);
		}
	}
	for(int i=0;i<(int)c.size();i++)
		for(int j=0;j<i;j++){
			pq.push({(A[c[i]-K].f-A[c[j]-K].f)*(A[c[i]-K].f-A[c[j]-K].f)+(A[c[i]-K].s-A[c[j]-K].s)*(A[c[i]-K].s-A[c[j]-K].s),{c[i],c[j]}});
		}
	while(!pq.empty()){
		pair<double,pair<int,int> > k=pq.top();
		pq.pop();
		if(find(k.s.s)!=find(k.s.f)){
			join(k.s.f,k.s.s);
			out+=sqrt(k.f);
		}
	}
	printf("%.5lf\n",out);
}
