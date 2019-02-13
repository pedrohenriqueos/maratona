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

int N;
inline int sum(int a){
	int p=N/a;
	int q=1LL+(p-1LL)*a;
	return ((1LL+q)*p)/2LL;
}

int32_t main(){
	cin >> N;
	set<int> out;
	for(int i=1;i*i<=N;i++){
		if(N%i==0){
			out.insert(sum(i));
			out.insert(sum(N/i));
		}
	}
	//sort(all(out));
	for(auto a:out)
		cout << a << " ";
	puts("");
}



















