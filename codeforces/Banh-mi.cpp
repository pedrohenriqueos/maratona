//with tutorial
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
#define mod 1000000007

typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int Z[100002],O[100002];
int fastexp(int b,int e){
	if(e==0) return 1;
	if(e==1)
		return b;
	int ans=fastexp(b,e/2);
	ans=(ans*ans)%mod;
	if(e%2==1)
		ans=(b*ans)%mod;
	return ans;
}

int32_t main(){
	int N,Q;
	cin >> N >> Q;
	string str;
	cin >> str;
	for(int i=0;i<N;i++){
		if(str[i]=='1'){
			O[i]++;
		}else
			Z[i]++;
	}
	for(int i=1;i<N;i++)
		O[i]+=O[i-1],Z[i]+=Z[i-1];
	while(Q--){
		int l,r;
		cin >> l >> r;
		r--,l--;
		int out;
		if(l)
			out=((fastexp(2LL,O[r]-O[l-1])-1LL)*fastexp(2LL,Z[r]-Z[l-1]))%mod;
		else
			out=((fastexp(2LL,O[r])-1LL)*fastexp(2LL,Z[r]))%mod;
		cout << out << '\n';
	}
}



















