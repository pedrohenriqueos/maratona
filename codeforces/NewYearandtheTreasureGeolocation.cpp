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
	cin >> N;
	vector<ii> A(N),B(N);
	for(auto &a:A) cin >> a.f >> a.s;
	for(auto &b:B) cin >> b.f >> b.s;
	sort(all(A));
	sort(all(B));
	cout << A[0].f+B[N-1].f << " " << A[0].s+B[N-1].s << '\n';
}


















