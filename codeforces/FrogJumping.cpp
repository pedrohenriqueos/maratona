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
	int T;
	cin >> T;
	while(T--){
		int resp=0LL,a,b,k;
		cin >> a >> b >> k;
		resp+=(a*(k/2LL)+((k%2LL==1LL)?a:0LL))-(b*(k/2LL));
		cout << resp << '\n';
	}
}



















