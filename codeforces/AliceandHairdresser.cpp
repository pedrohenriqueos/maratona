#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define all(a) a.begin(),a.end()
#define db(a) cerr << #a << " = " << a << '\n';
#define _ << " , " << 
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define REP(i,n) FOR(i,0,n)
#define int long long
typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int p[100002];
int32_t main(){
	memset(p,-1,sizeof p);
	int N,M,K,cont=0;
	scanf("%lld %lld %lld",&N,&M,&K);
	vector<int> A(N);
	REP(i,N){
		scanf("%lld",&A[i]);
		if(i and A[i]>K){
			if(p[i-1]==-1)
				cont++;
			p[i]=i;
		}else if(A[i]>K and !i)
			p[i]=i,cont++;
		else if(A[i]>K) p[i]=i;
	}
	while(M--){
		int a,b,c;
		scanf("%lld",&a);
		if(a==0){
			printf("%lld\n",cont);
		}else{
			scanf("%lld %lld",&b,&c);
			if(A[b-1]<=K and (A[b-1]+c)>K){
				if((b-1)>0 and b<N){
					if(p[b-2]!=-1 and p[b]!=-1)
						cont--;
					else if(p[b-2]==-1 and p[b]==-1)
						cont++;
				}else if((b-1)>0){
					if(p[b-2]==-1)
						cont++;
				}else{
					if(p[b]==-1)
						cont++;
				}	
			}
			A[b-1]+=c;
			if(A[b-1]>K)
				p[b-1]=b-1;
		}
	}
}
