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

int32_t main(){
	int N, L, a,out=0;
	string str;
	scanf("%d %d %d",&N,&L,&a);
	vector<ii> A(N);
	for(auto &a:A)
		scanf("%d %d",&a.f, &a.s);
	if(N==0){
		out+=(L/a);
		printf("%d\n",out);
		return 0;
	}
	if(A[0].f!=0 and (A[0].f-a)>=0)
		out+=(A[0].f/a);
	for(int i=1;i<N;i++)
		if(A[i].f-(A[i-1].f+A[i-1].s)>=a){
			out+=((A[i].f-(A[i-1].f+A[i-1].s))/a);
		}
	if(L-(A[N-1].f+A[N-1].s)>=a);
	out+=((L-(A[N-1].f+A[N-1].s))/a);
	printf("%d\n",out);
}














