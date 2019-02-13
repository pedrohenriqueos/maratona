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
#define mod 360
typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int32_t main(){
	int N;
	cin >> N;
	vector<int> A(N);
	for(auto &a:A) cin >> a;
	for(int k=0;k<(1<<N);k++){
		int ini=0;
		for(int x=0;x<N;x++){
			if(k&(1<<x))
				ini=(ini+A[x])%mod;
			else{
				ini-=A[x];
				if(ini<0) ini+=mod;
			}
		}
		if(ini==0){
			return puts("YES");
		}
	}
	puts("NO");
}



















