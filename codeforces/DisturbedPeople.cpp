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
	int N,out=0;
	cin >> N;
	vector<int> A(N);
	for(auto &a:A) cin >> a;
	for(int i=1;i<(N-1);i++)
		if(A[i]==0 and A[i-1]==1 and A[i+1]==1)
			out++,A[i+1]=0;
	cout << out << '\n';
}



















