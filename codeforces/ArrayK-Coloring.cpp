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

vector<int> G[5002];
int32_t main(){
	int N,K;
	cin >> N >> K;
	vector<int> A(N),out(N),V(5002,1);
	for(auto &a:A) cin >> a;
	if(K>N) return puts("NO");
	for(int i=0;i<K;i++){
		out[i]=i+1;
		G[A[i]].pb(i+1);
	}
	for(int i=1;i<5001;i++)
		sort(all(G[i]));
	for(int i=K;i<N;i++){
		while(binary_search(G[A[i]].begin(),G[A[i]].end(),V[A[i]]))
			V[A[i]]++;
		out[i] = V[A[i]]++;
		if(V[A[i]]>(K+1)) return puts("NO");
	}
	puts("YES");
	for(auto &a:out)
		cout << a << " ";
	puts("");
}



















