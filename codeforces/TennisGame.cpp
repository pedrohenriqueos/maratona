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

typedef pair<int,int> ii;
typedef pair<int, ii> iii;


int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	vector<int> A(N);
	vector<ii> out;
	for(auto &a:A) cin >> a;
	vector<vector<int>> where(2,vector<int>(2*N+1,inf));
	vector<vector<int>> pref(2,vector<int>(N));
	for(int i=0;i<N;i++){
		int x = A[i]-1;
		if(i)
			pref[0][i]=pref[0][i-1],pref[1][i]=pref[1][i-1];
		pref[x][i]++;
		where[x][pref[x][i]]=i;
	}
	for(int t=1;t<=N;t++){
		int id=0;
		int qA=0,qB=0,s=-1;
		bool ok=true;
		while(id<N){
			vector<int> cont(2);
			if(id)
				for(auto i:{0,1})
					cont[i] = pref[i][id-1];
			int jump_A = where[0][cont[0]+t];
			int jump_B = where[1][cont[1]+t];
			int jump=min(jump_A,jump_B);
			if(jump<N){
				id=jump+1;
				if(jump==jump_A){
					qA++;
					if(id==N and qA>qB)
						s=qA;
				}else{
					qB++;
					if(id==N and qB>qA)
						s=qB;
				}
			}else{
				break;
			}
		}
		if(id<N) ok=false;
		if(s==-1) ok=false;
		if(ok)
			out.pb({s,t});
	}
	sort(all(out));
	cout << (int)out.size() << '\n';
	for(auto a:out)
	 cout << a.f << " " << a.s << '\n';
}
