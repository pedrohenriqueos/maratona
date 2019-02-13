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

typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int out[100002];
int32_t main(){
	int T,N;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		vector< pair<ii,int> > A(N);
		{int x=0;
		for(auto &a:A) scanf("%d %d",&a.f.f,&a.f.s),a.s=x++;
		}
		sort(all(A));
		int l=A[0].f.f,r=A[0].f.s,cont=0;
		out[A[0].s] = 1;
		bool flag=false;
		for(int i=1;i<N;i++){
			if(A[i].f.f>=l and A[i].f.f<=r)
				r=max(r,A[i].f.s);
			else
				l=A[i].f.f,r=A[i].f.s,flag=!flag,cont++;
			if(!flag)
				out[A[i].s] = 1;
			else
				out[A[i].s] = 2;
		}
		if(!cont){
			puts("-1");
			continue;
		}
		for(int i=0;i<N;i++)
			printf("%d ",out[i]);
		puts("");
	}
}
