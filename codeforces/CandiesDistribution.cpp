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
	scanf("%d",&N);
	vector<int> L(N),R(N),out(N);
	for(auto &a:L) scanf("%d",&a);
	for(auto &a:R) scanf("%d",&a);
	for(int i=0;i<N;i++) out[i]=N - L[i]-R[i];
	for(int i=0;i<N;i++){
		int cont=0;
		for(int j=0;j<i;j++)
			if(out[j]>out[i])
				cont++;
		if(cont!=L[i])
			return puts("NO");
		cont =0;
		for(int j=N-1;j>i;j--)
			if(out[j]>out[i])
				cont++;
		if(cont!=R[i])
			return puts("NO");
		if(out[i]<=0)
			return puts("NO");
	}
	puts("YES");
	for(int i=0;i<N;i++)
		printf("%d ",out[i]);
	puts("");
}














