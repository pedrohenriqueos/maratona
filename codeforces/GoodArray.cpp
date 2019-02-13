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
	int N,sum=0;
	cin >> N;
	vector<pair<int,int>> A(N);
	vector<int> out;
	{ int x=1;
	for(auto &a:A) cin >> a.f,sum+=a.f,a.s=x++;
	}
	sort(all(A));
	for(int i=0;i<N;i++){
		int val;
		if(i!=(N-1)){
			val=sum-A[N-1].f-A[i].f;
			if(val==A[N-1].f)
				out.push_back(A[i].s);
		}else{
			val=sum-A[i].f-A[N-2].f;
			if(val==A[N-2].f)
				out.push_back(A[i].s);
		}
	}
	cout << out.size() << '\n';
	for(auto &o:out)
		cout << o << " ";
	cout << '\n';
}



















