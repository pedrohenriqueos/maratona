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

int N,T;
string str;
int32_t main(){
	cin >> T;
	
	while(T--){
		int l,r,d;
		cin >> l >> r >> d;
		if(d<l or d>r)
			cout << d << '\n';
		else{
			int b1=0,b2=1e10,ans;
			while(b1<=b2){
				int midb=(b1+b2) >> 1;
				if(d*midb > r)
					ans=d*midb,b2=midb-1;
				else
					b1=midb+1;
			}
			/*int a=0,b=1e10,out;
			while(a<=b){
				int mid=(a+b) >> 1;
				if(mid*d+ans>r)
					out=mid*d+ans,b=mid-1;
				else
					a=mid+1;
			}*/
			cout << ans << '\n';
		}
	}
	/*vector<int> A(N);
	for(auto &a:A) cin >> a;
	*/
	//cin >> str;
	
}
