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
#define int long long
typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int32_t main(){
	int T,N;
	cin >> T;
	vector<ii> A(T);
	for(int t=0;t<T;t++){
		cin >> N;
		int m=0,a;
		for(int i=0;i<N;i++) cin >> a,m=max(m,a);
		A[t]={m,N};
	}
	sort(all(A));
	reverse(all(A));
	int out=0;
	for(int i=1;i<T;i++){
		out+=(A[0].f-A[i].f)*A[i].s;
	}
	cout << out << '\n';
}



















