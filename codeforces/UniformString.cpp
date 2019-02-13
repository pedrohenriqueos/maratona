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
	int T;
	cin >> T;
	while(T--){
		int N,K;
		cin >> N >> K;
		string s="";
		for(int i=0;i<N;i++)
			s+=('a'+i%K);
		cout << s << '\n';
	}
}



















