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
	int N;
	long long out=0;
	scanf("%d",&N);
	vector<int> A(N),B(N);
	for(int i=0;i<N;i++)
		scanf("%d %d",&A[i],&B[i]);
	sort(all(A));
	sort(all(B));
	for(int i=0;i<N;i++)
		out+= max(A[i],B[i])+1;
	printf("%lld\n",out);
}














