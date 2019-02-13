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
	int T,a,b;
	cin >> T;
	while(T--){
		cin >> a >> b;
		a--;
		if(a%2==0)
			a/=2;
		else
			a=((a-1)/2-a);
		if(b%2==0)
			b/=2;
		else
			b=((b-1)/2-b);
		cout << b-a << '\n';
	}
}
